// DuckyCustomListener.cpp

#include "../../include/listener/DuckyCustomListener.h"
#include <stdexcept>

DuckyCustomListener::DuckyCustomListener(bool printTraversal) : 
    printTraversal(printTraversal), 
    currentScope("global"),
    tempVarCounter(0),
    labelCounter(0) {
    std::cout << "Listener constructor called\n";
}

void DuckyCustomListener::enterProgram(duckyParser::ProgramContext* ctx) {
    std::cout << "Entering program\n";
    if (!ctx) {
        std::cout << "Program context is null\n";
        return;
    }

    if (!ctx->ID()) {
        std::cout << "Program ID is null\n";
        return;
    }

    variableTable.setScope(currentScope);
    std::string programName = ctx->ID()->getText();
    std::cout << "Program name found: " << programName << "\n";

    if (ctx->var_declarations()) {
        std::cout << "Found variable declarations\n";
    }
}

void DuckyCustomListener::exitProgram(duckyParser::ProgramContext* ctx) {
    if (!ctx) {
        std::cout << "Program context is null in exitProgram\n";
        return;
    }
    
    std::cout << "Exiting program...\n";
    if (printTraversal) {
        std::cout << "\n=== Completing Program Analysis ===\n";
    }
    variableTable.cleanVariables(currentScope);
    quadrupleManager.push("END", -1, -1, -1);
    
    if (printTraversal) {
        std::cout << "Final Quadruples:\n";
        for (const auto& quad : quadrupleManager.getQuadruples()) {
            std::cout << "(" << std::get<0>(quad) << ", " << std::get<1>(quad) << ", " << std::get<2>(quad) << ", " << std::get<3>(quad) << ")\n";
        }
    }
}

void DuckyCustomListener::exitVar_decl(duckyParser::Var_declContext* ctx) {
    std::cout << "exitVar_decl called\n";
    if (!ctx || !ctx->data_type() || !ctx->var_list()) {
        std::cout << "Null context or components in exitVar_decl\n";
        return;
    }
    
    std::string varType = ctx->data_type()->getText();
    for (auto id : ctx->var_list()->ID()) {
        std::string varName = id->getText();
        try {
            int address;
            if (currentScope == "global") {
                address = memoryManager.getAddress(varType, "global");
            } else {
                address = memoryManager.getAddress(varType, "local");
            }
            variableTable.addVariable(currentScope, varName, varType, address);

            if (printTraversal) {
                std::cout << "Added variable: " << varName << " of type " << varType  << " at address " << address << "\n";
            }
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << "\n";
        }
    }
}


void DuckyCustomListener::enterFunc_decl(duckyParser::Func_declContext* ctx) {
    std::string funcName = ctx->ID()->getText();
    currentScope = funcName;

    // Set scope in the variable table
    variableTable.setScope(currentScope);

    // Add function to the directory
    functionDirectory.addFunction(funcName);

    // Handle function parameters
    if (ctx->param_list()) {
        for (auto paramCtx : ctx->param_list()->param()) {
            std::string paramName = paramCtx->ID()->getText();
            std::string paramType = paramCtx->data_type()->getText();
            int paramAddr = memoryManager.getAddress(paramType, currentScope);
            variableTable.addVariable(currentScope, paramName, paramType, paramAddr);
        }
    }

    if (printTraversal) {
        std::cout << "Entering function: " << funcName << "\n";
    }
}

void DuckyCustomListener::exitFunc_decl(duckyParser::Func_declContext* ctx) {
    if (printTraversal) {
        std::cout << "Exiting function: " << currentScope << "\n";
    }
    currentScope = "global";
}

void DuckyCustomListener::exitAssignment(duckyParser::AssignmentContext* ctx) {
    std::string varName = ctx->ID()->getText();
    std::string scope = variableTable.findScope(varName, currentScope);

    if (scope.empty()) {
        throw std::runtime_error("Variable '" + varName + "' not declared");
    }

    std::string varType = variableTable.getVariableType(scope, varName);
    std::string exprType = getExpressionType(ctx->expression());

    try {
        std::string resultType = semanticCube.getType(varType, exprType, "=");
        int exprValue = operandStack.top();
        operandStack.pop();

        int varAddr = variableTable.getVariableAddress(scope, varName);
        quadrupleManager.push("=", exprValue, -1, varAddr); // Assign to correct address

        if (printTraversal) {
            std::cout << "Generated assignment quadruple\n";
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error in assignment: " << e.what() << "\n";
    }
}


void DuckyCustomListener::exitPrint(duckyParser::PrintContext* ctx) {
    for (auto item : ctx->print_list()->print_item()) {
        if (item->expression()) {
            std::string exprType = getExpressionType(item->expression());
            int value = operandStack.top();
            operandStack.pop();
            quadrupleManager.push("PRINT", value, -1, -1);
        } else if (item->STRING_LITERAL()) {
            // Handle string literals
            std::string strValue = item->STRING_LITERAL()->getText();
            // Remove quotes
            strValue = strValue.substr(1, strValue.length() - 2);
            // Store string in temp and print
            int strAddr = tempVarCounter++;
            quadrupleManager.push("PRINT_STR", strAddr, -1, -1);
        }
    }
    quadrupleManager.push("PRINT_NL", -1, -1, -1);
}

void DuckyCustomListener::enterCondition(duckyParser::ConditionContext* ctx) {
    if (!ctx || !ctx->expression()) {
        std::cerr << "Error: Invalid or null condition expression\n";
        return;
    }

    std::string exprType = getExpressionType(ctx->expression());
    if (exprType != "bool") {
        throw std::runtime_error("Condition must be boolean");
    }
    
    int condition = operandStack.top();
    operandStack.pop();
    quadrupleManager.push("GOTOF", condition, -1, -1);
    jumpStack.push(quadrupleManager.getCount() - 1);
}

void DuckyCustomListener::exitCondition(duckyParser::ConditionContext* ctx) {
    if (!ctx) {
        std::cerr << "Error: Null context in exitCondition\n";
        return;
    }

    if (!ctx->else_block() || !ctx->else_block()->ELSE()) {
        int falseJump = jumpStack.top();
        jumpStack.pop();
        quadrupleManager.updateJump(falseJump, quadrupleManager.getCount());
    }
}


void DuckyCustomListener::enterLoop(duckyParser::LoopContext* ctx) {
    jumpStack.push(quadrupleManager.getCount());
    
    std::string exprType = getExpressionType(ctx->expression());
    if (exprType != "bool") {
        throw std::runtime_error("Loop condition must be boolean");
    }
    
    int condition = operandStack.top();
    operandStack.pop();
    quadrupleManager.push("GOTOF", condition, -1, -1);
    jumpStack.push(quadrupleManager.getCount() - 1);
}

void DuckyCustomListener::exitLoop(duckyParser::LoopContext* ctx) {
    int falseJump = jumpStack.top();
    jumpStack.pop();
    int returnPoint = jumpStack.top();
    jumpStack.pop();
    
    quadrupleManager.push("GOTO", -1, -1, returnPoint);
    quadrupleManager.updateJump(falseJump, quadrupleManager.getCount());
}

std::string DuckyCustomListener::getExpressionType(duckyParser::ExpressionContext* ctx) {
    if (!ctx) {
        std::cout << "Expression context is null\n";
        return "error";
    }
    
    std::cout << "Processing expression...\n";

    // Handle comparison operators (e.g., <, >, ==, !=)
    if (ctx->comparison_operator()) {
        // Retrieve operand types from the type stack
        if (typeStack.size() < 2) {
            throw std::runtime_error("Insufficient types on type stack for comparison");
        }
        std::string rightType = typeStack.top(); typeStack.pop();
        std::string leftType = typeStack.top(); typeStack.pop();

        // Retrieve operand addresses from the operand stack
        if (operandStack.size() < 2) {
            throw std::runtime_error("Insufficient operands on operand stack for comparison");
        }
        int rightOperand = operandStack.top(); operandStack.pop();
        int leftOperand = operandStack.top(); operandStack.pop();

        // Get the comparison operator as a string
        std::string op = ctx->comparison_operator()->getText();

        // Determine the result type using the semantic cube
        try {
            std::string resultType = semanticCube.getType(leftType, rightType, op);

            // Create a quadruple for the comparison operation
            int resultAddr = memoryManager.getTempAddress("bool"); // Assume comparisons yield boolean results
            quadrupleManager.push(op, leftOperand, rightOperand, resultAddr);

            // Push the result type and address back to the stacks
            operandStack.push(resultAddr);
            typeStack.push(resultType);

            return resultType;
        } catch (const std::runtime_error& e) {
            throw std::runtime_error("Type mismatch in expression: " + std::string(e.what()));
        }
    }

    // For simple expressions without comparison operators
    if (!typeStack.empty()) {
        return typeStack.top();
    }

    std::cout << "Unhandled expression type\n";
    return "error";
}


void DuckyCustomListener::createTempQuadruple(const std::string& leftType, 
                                            const std::string& rightType,
                                            const std::string& op, 
                                            const std::string& resultType) {
    int rightOperand = operandStack.top(); operandStack.pop();
    int leftOperand = operandStack.top(); operandStack.pop();
    int resultAddr = memoryManager.getTempAddress(resultType);
    quadrupleManager.push(op, leftOperand, rightOperand, resultAddr);
    operandStack.push(resultAddr);

    typeStack.push(resultType);
}

void DuckyCustomListener::exitExp(duckyParser::ExpContext* ctx) {
    if (ctx->term().size() > 1) {
        std::string rightType = typeStack.top(); typeStack.pop();
        std::string leftType = typeStack.top(); typeStack.pop();
        std::string op = !ctx->PLUS().empty() ? "+" : "-";

        try {
            std::string resultType = semanticCube.getType(leftType, rightType, op);
            createTempQuadruple(leftType, rightType, op, resultType);
        } catch (const std::runtime_error& e) {
            throw std::runtime_error("Type mismatch in expression");
        }
    }
}

void DuckyCustomListener::exitTerm(duckyParser::TermContext* ctx) {
    if (ctx->factor().size() > 1) {
        std::string rightType = typeStack.top(); typeStack.pop();
        std::string leftType = typeStack.top(); typeStack.pop();
        // Get operator from tokens list
        std::string op = (!ctx->MULT().empty()) ? "*" : "/";

        try {
            std::string resultType = semanticCube.getType(leftType, rightType, op);
            createTempQuadruple(leftType, rightType, op, resultType);
        } catch (const std::runtime_error& e) {
            throw std::runtime_error("Type mismatch in term");
        }
    }
}

void DuckyCustomListener::exitExpression(duckyParser::ExpressionContext* ctx) {
    std::cout << "Entering exitExpression\n";
    if (!ctx) {
        std::cout << "Expression context is null in exitExpression\n";
        return;
    }

    if (ctx->comparison_operator()) {
        std::cout << "Found comparison operator: " << ctx->comparison_operator()->getText() << "\n";
        if (typeStack.empty()) {
            std::cout << "Type stack is empty!\n";
            return;
        }
        std::string rightType = typeStack.top(); typeStack.pop();
        if (typeStack.empty()) {
            std::cout << "Type stack is empty after first pop!\n";
            return;
        }
        std::string leftType = typeStack.top(); typeStack.pop();
        std::string op = ctx->comparison_operator()->getText();
        
        try {
            std::cout << "Attempting to create quadruple for comparison\n";
            std::string resultType = semanticCube.getType(leftType, rightType, op);
            createTempQuadruple(leftType, rightType, op, resultType);
        } catch (const std::runtime_error& e) {
            std::cerr << "Error in comparison: " << e.what() << "\n";
        }
    }
}

void DuckyCustomListener::exitFactor(duckyParser::FactorContext* ctx) {
    if (ctx->ID()) {
        std::string varName = ctx->ID()->getText();
        std::string scope = variableTable.findScope(varName, currentScope);

        if (scope.empty()) {
            throw std::runtime_error("Variable '" + varName + "' not declared in any accessible scope");
        }

        int address = variableTable.getVariableAddress(scope, varName);
        std::string type = variableTable.getVariableType(scope, varName);
        operandStack.push(address); // Push correct variable address
        typeStack.push(type);
    } else if (ctx->constant()) {
        std::string value = ctx->constant()->getText();
        std::string type = ctx->constant()->FLOAT_CONSTANT() ? "float" : "int";
        int address = memoryManager.getConstantAddress(value, type); // Push constant address
        operandStack.push(address);
        typeStack.push(type);
    }
}

