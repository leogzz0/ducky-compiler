#ifndef DUCKY_CUSTOM_LISTENER_H
#define DUCKY_CUSTOM_LISTENER_H

#include "../../antlr/duckyBaseListener.h"
#include "../../include/semantic/FunctionDirectory.h"
#include "../../include/semantic/SemanticCube.h"
#include "../../include/semantic/VariableTable.h"
#include "../../include/semantic/ErrorHandler.h"

class DuckyCustomListener : public duckyBaseListener {
	public:
		DuckyCustomListener(VariableTable& variableTable, ErrorHandler& errorHandler, FunctionDirectory& functionDirectory, SemanticCube& semanticCube);

		void enterProgram(duckyParser::ProgramContext *ctx) override;
		void exitProgram(duckyParser::ProgramContext *ctx) override;
		
		void exitVar_decl(duckyParser::Var_declContext *ctx) override;

		void enterFunc_decl(duckyParser::Func_declContext *ctx) override;
		void exitFunc_decl(duckyParser::Func_declContext *ctx) override;
		void exitFunction_call(duckyParser::Function_callContext *ctx) override;

		void enterBlock(duckyParser::BlockContext *ctx) override;
		void exitBlock(duckyParser::BlockContext *ctx) override;

		void enterAssignment(duckyParser::AssignmentContext *ctx) override;
		void exitAssignment(duckyParser::AssignmentContext *ctx) override;

		void enterPrint(duckyParser::PrintContext *ctx) override;
		void exitPrint(duckyParser::PrintContext *ctx) override;

		void enterLoop(duckyParser::LoopContext *ctx) override;
		void exitLoop(duckyParser::LoopContext *ctx) override;

		void enterCondition(duckyParser::ConditionContext *ctx) override;
		void exitCondition(duckyParser::ConditionContext *ctx) override;

	private:
		VariableTable &variableTable;
		ErrorHandler &errorHandler;
		FunctionDirectory &functionDirectory;
		SemanticCube &semanticCube;

		std::string getType(duckyParser::ExpressionContext *ctx);
		std::string getType(duckyParser::ExpContext *ctx);
};

#endif // DUCKY_CUSTOM_LISTENER_H
