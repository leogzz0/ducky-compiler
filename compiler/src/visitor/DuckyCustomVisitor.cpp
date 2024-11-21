// DuckyCustomVisitor.cpp

#include "../include/visitor/DuckyCustomVisitor.h"

int DuckyCustomVisitor::allocateMemory(Type type, bool isGlobal) {
    int address = -1;
    if (isGlobal) {
        if (type == INT) address = virtualMemory.allocateGlobalInt();
        else if (type == FLOAT) address = virtualMemory.allocateGlobalFloat();
    } else {
        if (type == INT) address = virtualMemory.allocateLocalInt();
        else if (type == FLOAT) address = virtualMemory.allocateLocalFloat();
    }
    return address;
}

void DuckyCustomVisitor::handleMemoryAllocationError(int address, antlr4::Token *startToken) {
    int line = startToken->getLine();
    int column = startToken->getCharPositionInLine();
    switch (address) {
        case -1:
            std::cerr << "Out of memory for global variables. Line: " << line << ", Column: " << column << std::endl;
            return;
        case -2:
            std::cerr << "Out of memory for local variables. Line: " << line << ", Column: " << column << std::endl;
            return;
        case -3:
            std::cerr << "Out of memory for integer constants. Line: " << line << ", Column: " << column << std::endl;
            return;
        case -4:
            std::cerr << "Out of memory for float constants. Line: " << line << ", Column: " << column << std::endl;
            return;
        case -5:
            std::cerr << "Out of memory for string constants. Line: " << line << ", Column: " << column << std::endl;
            return;
        default:
            return;
    }
    throw std::runtime_error("Memory allocation error.");
}

void DuckyCustomVisitor::handleVarInfoError(std::string var, antlr4::Token *startToken) {
    int line = startToken->getLine();
    int column = startToken->getCharPositionInLine();
    std::cerr << "Variable " << var << " not found. Line: " << line << ", Column: " << column << std::endl;
    throw std::runtime_error("Variable info error.");
}

std::string DuckyCustomVisitor::createTempVar() {
    return "t" + std::to_string(tempCounter++);
}

void DuckyCustomVisitor::generateQuadruple(const std::string &op, const std::string &arg1, const std::string &arg2, const std::string &result) {
    // generate quadruple with names and addresses
    Quadruple quad = {{op, -1}, {arg1, getAddress(arg1)}, {arg2, getAddress(arg2)}, {result, getAddress(result)}};
    quadruples.push_back(quad);
    // quadruplesWithAddresses.push_back({op, std::to_string(getAddress(arg1)), std::to_string(getAddress(arg2)), std::to_string(getAddress(result))});
}

int DuckyCustomVisitor::getAddress(const std::string &var, Type type) {
    if (functionDirectory.lookupVariableInAnyScope(var) != nullptr) {
        return functionDirectory.lookupVariableInAnyScope(var)->memoryAddress;
    }
    if (virtualMemory.findConstant(type, var) != -1) {
        return virtualMemory.findConstant(type, var);
    }
    return -1;
}

// ******************************************* PROGRAM *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitProgram(duckyParser::ProgramContext *ctx) {
    // get the program name
    std::string programName = ctx->ID()->getText();

    // add the program to the function directory as a main function
    functionDirectory.registerFunction(programName, FUNCTION);
    functionDirectory.assignMainFunction(functionDirectory.getActiveFunction());

    // generate GOTO quadruple for jumping to the main function
    jumpStack.push(quadruples.size());
    Quadruple gotoQuad = {{"GOTO", -1}, {"nil", -1}, {"nil", -1}, {"pending", -1}};
    quadruples.push_back(gotoQuad);

    // visit variable declarations if they exist
    if (ctx->var_declarations() != nullptr) {
        visit(ctx->var_declarations());
    }

    // visit function declarations
    if (ctx->func_declarations() != nullptr) {
        for (auto func_decl : ctx->func_declarations()->func_decl()) {
            visit(func_decl);
            virtualMemory.resetLocals(); // reset local memory after visiting each function
        }
    }

    // set main function details and update GOTO quadruple
    functionDirectory.setActiveFunction(functionDirectory.retrieveMainFunction());
    functionDirectory.assignStartAddressToActiveFunction(quadruples.size());
    int startAddress = jumpStack.top();
    jumpStack.pop();
    quadruples[startAddress].result = {"", static_cast<int>(quadruples.size())};

    // visit the main block of the program
    visit(ctx->body());

    // generate END quadruple to terminate the program
    Quadruple haltQuad = {{"END", -1}, {"nil", -1}, {"nil", -1}, {"nil", -1}};
    quadruples.push_back(haltQuad);

    return nullptr;
}

// ******************************************* VARIABLES *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitVar_declarations(duckyParser::Var_declarationsContext *ctx) {
    // iterate over all variable declarations
    for (auto decl : ctx->var_decl()) {
        if (decl != nullptr) {
            visit(decl); // visit each variable declaration
        }
    }
    return nullptr;
}

antlrcpp::Any DuckyCustomVisitor::visitVar_decl(duckyParser::Var_declContext *ctx) {
    // get the variable type as a Type enum from the string
    Type varType = semanticCube.getTypeFromString(ctx->data_type()->getText());
    
    // check if the variables declared are in the global or local scope
    bool isGlobal = functionDirectory.checkIfGlobalScope();

    // iterate over all the variables declared in the var_list
    for (auto id : ctx->var_list()->ID()) {
        // get the variable name
        std::string varName = id->getText();
        
        // allocate memory for the variable
        int address = allocateMemory(varType, isGlobal);
        
        // handle memory allocation error
        handleMemoryAllocationError(address, ctx->getStart());
        
        // add the variable to the current function's variable table
        functionDirectory.addLocalVariableToActiveFunction(varName, varType, address);
    }

    return nullptr;
}

// ******************************************* FUNCTIONS *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitFunc_decl(duckyParser::Func_declContext *ctx) {
    // get the function name
    std::string functionName = ctx->ID()->getText();

    // assume FUNCTION as the return type (default in this grammar)
    Type returnType = FUNCTION;

    // add the function to the function directory
    if (!functionDirectory.registerFunction(functionName, returnType)) {
        int line = ctx->getStart()->getLine();
        int column = ctx->getStart()->getCharPositionInLine();
        std::cerr << "Function " << functionName << " already declared. Line: " << line << ", Column: " << column << std::endl;
        return nullptr;
    }

    // set the starting address of the function
    functionDirectory.assignStartAddressToActiveFunction(quadruples.size());

    // processing parameters
    int parameterIndex = 0;
    if (ctx->param_list() != nullptr) {
        for (auto param : ctx->param_list()->param()) {
            std::string paramName = param->ID()->getText();
            Type paramType = semanticCube.getTypeFromString(param->data_type()->getText());

            // generate a memory address for the parameter
            int memoryAddress = (paramType == INT) ? virtualMemory.allocateLocalInt() : virtualMemory.allocateLocalFloat();

            // add parameter to the function's local variables
            if (!functionDirectory.addLocalVariableToActiveFunction(paramName, paramType, memoryAddress)) {
                int line = param->getStart()->getLine();
                int column = param->getStart()->getCharPositionInLine();
                std::cerr << "Parameter " << paramName << " already declared in function " << functionName << ". Line: " << line << ", Column: " << column << std::endl;
                return nullptr;
            }

            // updating the parameter table for the function
            functionDirectory.getActiveFunction()->parametersTable.push_back({paramName, paramType, memoryAddress});
            parameterIndex++;
        }
        functionDirectory.getActiveFunction()->numParams = parameterIndex;
    }

    // process variable declarations inside the function
    if (ctx->var_declarations() != nullptr) {
        visit(ctx->var_declarations());
    }

    // process the function body
    visit(ctx->body());

    // generate an ENDFUNC quadruple at the end of the function
    Quadruple endFuncQuad = {{"ENDFUNC", -1}, {"nil", -1}, {"nil", -1}, {"nil", -1}};
    quadruples.push_back(endFuncQuad);

    return nullptr;
}

antlrcpp::Any DuckyCustomVisitor::visitFunc_declarations(duckyParser::Func_declarationsContext *ctx) {
    for (auto func_decl : ctx->func_decl()) {
        visit(func_decl);
    }
    return nullptr;
}

// ******************************************* PARAMETERS *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitParam_list(duckyParser::Param_listContext *ctx) {
    // iterate over all parameters in the parameter list
    for (size_t i = 0; i < ctx->param().size(); i++) {
        visit(ctx->param(i)); // Visit each parameter individually
    }
    return nullptr;
}

antlrcpp::Any DuckyCustomVisitor::visitParam(duckyParser::ParamContext *ctx) {
    // get the parameter name and type
    std::string paramName = ctx->ID()->getText();
    Type paramType = semanticCube.getTypeFromString(ctx->data_type()->getText());

    // allocate memory for the parameter
    int address = allocateMemory(paramType, false);

    // handle memory allocation errors
    handleMemoryAllocationError(address, ctx->getStart());

    // add the parameter to the function's parameter table
    functionDirectory.addParameterToActiveFunction(paramName, paramType, address);

    return nullptr;
}

// ******************************************* BODY *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitBody(duckyParser::BodyContext *ctx) {
    // iterate over all the statements in the body
    for (size_t i = 0; i < ctx->statement().size(); i++) {
        visit(ctx->statement(i)); // visit each statement individually
    }
    return nullptr;
}

// ******************************************* STATEMENT *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitStatement(duckyParser::StatementContext *ctx) {
    // visit all child nodes of the current statement
    visitChildren(ctx);
    return nullptr;
}

// ******************************************* ASSIGNMENT *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitAssignment(duckyParser::AssignmentContext *ctx) {
    // get the variable name from the assignment
    std::string varName = ctx->ID()->getText();

    // retrieve the variable information from the function directory
    VariableInfo *varInfo = functionDirectory.lookupVariableInAnyScope(varName);

    // if the variable is not found, handle the error
    if (varInfo == nullptr) {
        handleVarInfoError(varName, ctx->getStart());
    }

    // visit the expression being assigned to the variable
    visit(ctx->expression());

    // retrieve the result of the expression from the operand stack
    std::string result = operandStack.top();
    operandStack.pop();

    // retreive the type of the result from the type stack
    Type rightOpType = typeStack.top();
    typeStack.pop();

    // get the type of the variable being assigned
    Type varType = varInfo->type;

    // use the semantic cube to verify type compatibility
    Type resultType = semanticCube.getResultType(varType, rightOpType, "=");
    if (resultType == ERROR) {
        std::cerr << "Type mismatch in assignment to variable " << varName << "." << std::endl;
        return nullptr;
    }

    // generate a quadruple for the assignment
    Quadruple quad = {
        {"=", -1},
        {result, getAddress(result, resultType)},
        {"nil", -1},
        {varName, getAddress(varName, varType)}
    };
    quadruples.push_back(quad);

    return nullptr;
}

// ******************************************* EXPRESSION *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitExpression(duckyParser::ExpressionContext *ctx) {
    // visit the left operand (exp)
    visit(ctx->exp(0));

    // if there is a comparison operator, handle the right operand (exp)
    if (ctx->exp().size() > 1) {
        // push the comparison operator onto the operator stack
        operatorStack.push(ctx->comparison_operator()->getText());

        // visit the right operand
        visit(ctx->exp(1));

        // pop operands from the operand stack
        std::string rightOperand = operandStack.top();
        operandStack.pop();
        std::string leftOperand = operandStack.top();
        operandStack.pop();

        // pop operand types from the type stack
        Type rightType = typeStack.top();
        typeStack.pop();
        Type leftType = typeStack.top();
        typeStack.pop();

        // pop the operator from the operator stack
        std::string relationalOp = operatorStack.top();
        operatorStack.pop();

        // type checking using the semantic cube
        Type resultType = semanticCube.getResultType(leftType, rightType, relationalOp);
        if (resultType == ERROR) {
            std::cerr << "Type mismatch in relational operation." << std::endl;
            return nullptr;
        }

        // create a temporary variable for the result
        std::string tempResult = createTempVar();

        // allocate memory for the temporary variable
        int address = allocateMemory(resultType, functionDirectory.checkIfGlobalScope());
        handleMemoryAllocationError(address, ctx->getStart());

        // add the temporary variable to the function's variable table
        functionDirectory.addLocalVariableToActiveFunction(tempResult, resultType, address);

        // generate a quadruple for the relational operation
        Quadruple quad = {
            {relationalOp, -1},
            {leftOperand, getAddress(leftOperand, leftType)},
            {rightOperand, getAddress(rightOperand, rightType)},
            {tempResult, getAddress(tempResult, resultType)}
        };
        quadruples.push_back(quad);

        // push the temporary variable onto the operand stack
        operandStack.push(tempResult);
        typeStack.push(resultType);
    }

    return nullptr;
}

antlrcpp::Any DuckyCustomVisitor::visitExp(duckyParser::ExpContext *ctx) {
    // visit the left operand (term)
    visit(ctx->term(0));

    // iterate through additional terms
    for (size_t i = 1; i < ctx->term().size(); i++) {
        // push the operator (+ or -) onto the operator stack
        std::string arithmeticOp = ctx->children[i * 2 - 1]->getText();
        operatorStack.push(arithmeticOp);

        // visit the right operand (term)
        visit(ctx->term(i));

        // pop operands from the operand stack
        std::string rightOperand = operandStack.top();
        operandStack.pop();
        std::string leftOperand = operandStack.top();
        operandStack.pop();

        // pop operand types from the type stack
        Type rightType = typeStack.top();
        typeStack.pop();
        Type leftType = typeStack.top();
        typeStack.pop();

        // pop the operator from the operator stack
        std::string op = operatorStack.top();
        operatorStack.pop();

        // type checking using the semantic cube
        Type resultType = semanticCube.getResultType(leftType, rightType, op);
        if (resultType == ERROR) {
            std::cerr << "Type mismatch in arithmetic operation." << std::endl;
            return nullptr;
        }

        // create a temporary variable for the result
        std::string tempResult = createTempVar();

        // allocate memory for the temporary variable
        int address = allocateMemory(resultType, functionDirectory.checkIfGlobalScope());
        handleMemoryAllocationError(address, ctx->getStart());

        // add the temporary variable to the function's variable table
        functionDirectory.addLocalVariableToActiveFunction(tempResult, resultType, address);

        // generate a quadruple for the arithmetic operation
        Quadruple quad = {
            {op, -1},
            {leftOperand, getAddress(leftOperand, leftType)},
            {rightOperand, getAddress(rightOperand, rightType)},
            {tempResult, getAddress(tempResult, resultType)}
        };
        quadruples.push_back(quad);

        // push the temporary variable onto the operand stack
        operandStack.push(tempResult);
        typeStack.push(resultType);
    }

    return nullptr;
}

// ******************************************* TERM *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitTerm(duckyParser::TermContext *ctx) {
    // visit the left operand (factor)
    visit(ctx->factor(0));

    // iterate through additional factors, which imply multiplication or division operations
    for (size_t i = 1; i < ctx->factor().size(); i++) {
        // get the operator (* or /) and push it onto the operator stack
        std::string arithmeticOp = ctx->children[i * 2 - 1]->getText();
        operatorStack.push(arithmeticOp);

        // visit the right operand (factor)
        visit(ctx->factor(i));

        // generate quadruple for the arithmetic operation
        if (operatorStack.top() == "*" || operatorStack.top() == "/") {
            // pop operands from the operand stack
            std::string rightOperand = operandStack.top();
            operandStack.pop();
            std::string leftOperand = operandStack.top();
            operandStack.pop();

            // pop operand types from the type stack
            Type rightType = typeStack.top();
            typeStack.pop();
            Type leftType = typeStack.top();
            typeStack.pop();

            // pop the operator from the operator stack
            std::string op = operatorStack.top();
            operatorStack.pop();

            // perform type checking using the semantic cube
            Type resultType = semanticCube.getResultType(leftType, rightType, op);
            if (resultType == ERROR) {
                std::cerr << "Type mismatch in arithmetic operation." << std::endl;
                return nullptr;
            }

            // create a temporary variable for the result
            std::string tempResult = createTempVar();

            // allocate memory for the temporary variable
            int address = allocateMemory(resultType, functionDirectory.checkIfGlobalScope());
            handleMemoryAllocationError(address, ctx->getStart());

            // add the temporary variable to the function's variable table
            functionDirectory.addLocalVariableToActiveFunction(tempResult, resultType, address);

            // generate a quadruple for the arithmetic operation
            Quadruple quad = {
                {op, -1},
                {leftOperand, getAddress(leftOperand, leftType)},
                {rightOperand, getAddress(rightOperand, rightType)},
                {tempResult, getAddress(tempResult, resultType)}
            };
            quadruples.push_back(quad);

            // push the temporary variable onto the operand stack
            operandStack.push(tempResult);
            typeStack.push(resultType);
        }
    }

    return nullptr;
}

// ******************************************* FACTOR *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitFactor(duckyParser::FactorContext *ctx) {
    std::string operandName;

    if (ctx->LPAREN() != nullptr) {
        // if the factor is an expression in parentheses, visit the expression
        visit(ctx->expression());
    } else if (ctx->ID() != nullptr) {
        // if the factor is an identifier, get its information
        operandName = ctx->ID()->getText();
        VariableInfo *varInfo = functionDirectory.lookupVariableInAnyScope(operandName);

        // handle undefined variable error
        if (varInfo == nullptr) {
            handleVarInfoError(operandName, ctx->getStart());
        }

        // push the operand and its type onto their respective stacks
        operandStack.push(operandName);
        typeStack.push(varInfo->type);
    } else if (ctx->constant() != nullptr) {
        // if the factor is a constant, retrieve its value
        operandName = ctx->constant()->getText();
        Type cteType = semanticCube.getTypeFromConstant(operandName);

        // allocate memory for the constant
        int address = virtualMemory.getOrCreateConstant(cteType, operandName);
        handleMemoryAllocationError(address, ctx->getStart());

        // push the operand and its type onto their respective stacks
        operandStack.push(operandName);
        typeStack.push(cteType);
    }

    // check for unary minus
    if (ctx->MINUS() != nullptr) {
        // generate a temporary variable for the result of the unary operation
        std::string tempResult = createTempVar();

        // pop the operand and its type
        operandName = operandStack.top();
        operandStack.pop();
        Type operandType = typeStack.top();
        typeStack.pop();

        // allocate memory for the temporary variable
        int address = allocateMemory(operandType, functionDirectory.checkIfGlobalScope());
        handleMemoryAllocationError(address, ctx->getStart());

        // add the temporary variable to the function's variable table
        functionDirectory.addLocalVariableToActiveFunction(tempResult, operandType, address);

        // generate a quadruple for the unary minus operation
        Quadruple quad = {
            {"MINUS", -1},
            {operandName, getAddress(operandName, operandType)},
            {"nil", -1},
            {tempResult, getAddress(tempResult, operandType)}
        };
        quadruples.push_back(quad);

        // push the temporary variable onto the operand and type stacks
        operandStack.push(tempResult);
        typeStack.push(operandType);
    }

    return nullptr;
}

// ******************************************* PRINT *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitPrint(duckyParser::PrintContext *ctx) {
    // iterate over all the print items in the print list
    for (size_t i = 0; i < ctx->print_list()->print_item().size(); i++) {
        visit(ctx->print_list()->print_item(i));
    }
    return nullptr;
}

antlrcpp::Any DuckyCustomVisitor::visitPrint_item(duckyParser::Print_itemContext *ctx) {
    std::string printOperand;

    if (ctx->expression() != nullptr) {
        // if the print item is an expression, visit it
        visit(ctx->expression());
    } else if (ctx->STRING_LITERAL() != nullptr) {
        // if the print item is a string literal, get its value
        printOperand = ctx->STRING_LITERAL()->getText();

        // allocate memory for the string constant
        int address = virtualMemory.getOrCreateConstant(STRING, printOperand);
        handleMemoryAllocationError(address, ctx->getStart());

        // push the operand and type onto their respective stacks
        operandStack.push(printOperand);
        typeStack.push(STRING);
    }

    // pop the operand
    printOperand = operandStack.top();
    operandStack.pop();

    // pop the type
    Type printType = typeStack.top();
    typeStack.pop();

    // generate a quadruple to print the operand
    Quadruple quad = {{"PRINT", -1}, {"nil", -1}, {"nil", -1}, {printOperand, getAddress(printOperand, printType)}};
    quadruples.push_back(quad);

    return nullptr;
}

// ******************************************* LOOP *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitLoop(duckyParser::LoopContext *ctx) {
    // save the current quadruple index as the start of the loop
    int startAddress = quadruples.size();

    // evaluate the loop condition
    visit(ctx->expression());

    // pop the result of the condition expression
    std::string result = operandStack.top();
    operandStack.pop();

    // pop the type of the condition expression
    Type resultType = typeStack.top();
    typeStack.pop();

    // type checking to ensure the condition is of type INT (boolean condition)
    if (resultType != INT) {
        std::cerr << "Condition must be of type INT (boolean equivalent)." << std::endl;
        return nullptr;
    }

    // generate the GOTO false (GOTOF) quadruple
    int gotofQuadIndex = quadruples.size();
    Quadruple quad = {{"GOTOF", -1}, {result, getAddress(result, resultType)}, {"nil", -1}, {"pending", -1}};
    quadruples.push_back(quad);

    // push the GOTOF quadruple's index onto the jump stack
    jumpStack.push(gotofQuadIndex);

    // visit the loop body
    visit(ctx->body());

    // generate a GOTO quadruple to return to the loop condition
    quad = {{"GOTO", -1}, {"nil", -1}, {"nil", -1}, {std::to_string(startAddress), startAddress}};
    quadruples.push_back(quad);

    // update the GOTOF quadruple to jump to the end of the loop
    int exitAddress = jumpStack.top();
    jumpStack.pop();
    quadruples[exitAddress].result.name = std::to_string(quadruples.size());
    quadruples[exitAddress].result.address = quadruples.size();

    return nullptr;
}

// ******************************************* CONDITION *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitCondition(duckyParser::ConditionContext *ctx) {
    // visit the condition expression
    visit(ctx->expression());

    // pop the result of the expression
    std::string result = operandStack.top();
    operandStack.pop();

    // pop the type of the result of the expression
    Type resultType = typeStack.top();
    typeStack.pop();

    // type checking to ensure the condition is of type INT (boolean condition)
    if (resultType != INT) {
        std::cerr << "Condition must be of type INT (boolean equivalent)." << std::endl;
        return nullptr;
    }

    // generate a GOTOF quadruple and save its index for later backpatching
    int gotofQuadIndex = quadruples.size();
    Quadruple quad = {{"GOTOF", -1}, {result, getAddress(result, resultType)}, {"nil", -1}, {"pending", -1}};
    quadruples.push_back(quad);

    // push the GOTOF quadruple's index onto the jump stack
    jumpStack.push(gotofQuadIndex);

    // visit the body of the IF statement
    visit(ctx->body(0));

    // if there is an ELSE branch, handle it
    if (ctx->ELSE() != nullptr) {
        // Generate a GOTO quadruple for skipping the ELSE branch
        int gotoQuadIndex = quadruples.size();
        quad = {{"GOTO", -1}, {"nil", -1}, {"nil", -1}, {"pending", -1}};
        quadruples.push_back(quad);

        // backpatch the GOTOF quadruple to jump to the ELSE branch
        int gotofAddress = jumpStack.top();
        jumpStack.pop();
        quadruples[gotofAddress].result.name = std::to_string(quadruples.size());
        quadruples[gotofAddress].result.address = quadruples.size();

        // push the new GOTO quadruple index onto the jump stack
        jumpStack.push(gotoQuadIndex);

        // visit the ELSE branch body
        visit(ctx->body(1));
    }

    // backpatch the GOTO (if ELSE exists) or GOTOF (if no ELSE) to the correct exit address
    int exitAddress = jumpStack.top();
    jumpStack.pop();
    quadruples[exitAddress].result.name = std::to_string(quadruples.size());
    quadruples[exitAddress].result.address = quadruples.size();

    return nullptr;
}

// ******************************************* FUNCTION CALL *******************************************//

antlrcpp::Any DuckyCustomVisitor::visitFunction_call(duckyParser::Function_callContext *ctx) {
    std::string funcName = ctx->ID()->getText();

    // retrive function info
    FunctionInfo *funcInfo = functionDirectory.fetchFunctionInfo(funcName);
    if (!funcInfo) {
        int line = ctx->getStart()->getLine();
        int column = ctx->getStart()->getCharPositionInLine();
        std::cerr << "Variable " << funcName << " not found. Line: " << line << ", Column: " << column << std::endl;
        throw std::runtime_error("Variable info error.");
    }

    // generate ERA quadruple for the function call
    Quadruple quad = {{"ERA", -1}, {funcName, -1}, {"nil", -1}, {"nil", -1}};
    quadruples.push_back(quad);

    // process arguments
    int argCount = 0;
    for (auto arg : ctx->arg_list()->expression()) {
        visit(arg);

        // pop operand and type stacks
        std::string argValue = operandStack.top(); operandStack.pop();
        Type argType = typeStack.top(); typeStack.pop();

        // type checking
        if (argCount >= funcInfo->numParams || funcInfo->parametersTable[argCount].type != argType) {
            int line = arg->getStart()->getLine();
            int column = arg->getStart()->getCharPositionInLine();
            std::cerr << "Argument " << argCount + 1 << " type mismatch for function " << funcName << ". Expected: " << semanticCube.getStringFromType(funcInfo->parametersTable[argCount].type) << ", Got: " << semanticCube.getStringFromType(argType) << ". Line: " << line << ", Column: " << column << std::endl;
            throw std::runtime_error("Argument type mismatch.");
        }

        // generate PARAM quadruple
        quad = {{"PARAM", -1}, {argValue, getAddress(argValue, argType)}, {"nil", -1}, {std::to_string(funcInfo->parametersTable[argCount].memoryAddress), funcInfo->parametersTable[argCount].memoryAddress}};
        quadruples.push_back(quad);
        ++argCount;
    }

    if (argCount != funcInfo->numParams) {
        std::cerr << "Incorrect number of arguments for function " << funcName << ". Expected: " << funcInfo->numParams << ", Got: " << argCount << std::endl;
        throw std::runtime_error("Incorrect number of arguments.");
    }

    // generate GOSUB quadruple
    quad = {{"GOSUB", -1}, {funcName, -1}, {"nil", -1}, {std::to_string(funcInfo->startAddress), funcInfo->startAddress}};
    quadruples.push_back(quad);

    return nullptr;
}

