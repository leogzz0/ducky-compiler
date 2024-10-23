#include "antlr4-runtime.h"
#include "lexer/duckyLexer.h"
#include "parser/duckyParserParser.h"
#include "parser/duckyParserBaseVisitor.h"
#include <fstream>
#include <iostream>
#include <functional>
#include <string>

using namespace antlr4;

// helper function to escape double quotes in labels
std::string escapeQuotes(const std::string &label) {
	std::string escapedLabel = label;
	size_t pos = 0;
	while ((pos = escapedLabel.find("\"", pos)) != std::string::npos) {
		escapedLabel.insert(pos, "\\");
		pos += 2; // move past the escaped quote
	}
	return escapedLabel;
}

class DuckyVisitor : public duckyParserBaseVisitor {
public:
	// visit the main program node
	antlrcpp::Any visitProgram(duckyParserParser::ProgramContext *ctx) override {
		std::cout << "Visiting the main program: " << ctx->ID()->getText() << std::endl;
		return visitChildren(ctx);
	}

	// visit a variable declaration
	antlrcpp::Any visitVar_decl(duckyParserParser::Var_declContext *ctx) override {
		std::cout << "Variable declaration: ";
		for (auto id : ctx->var_list()->ID()) {
			std::cout << id->getText() << " "; // print each variable id
		}
		std::cout << ": " << ctx->data_type()->getText() << std::endl;
		return visitChildren(ctx);
	}

	// visit an assignment
	antlrcpp::Any visitAssignment(duckyParserParser::AssignmentContext *ctx) override {
		std::cout << "Assignment: " << ctx->ID()->getText() << " = " << ctx->expression()->getText() << std::endl;
		return visitChildren(ctx);
	}

	// Visit a print statement
	antlrcpp::Any visitPrint(duckyParserParser::PrintContext *ctx) override {
		std::cout << "Print: ";
		for (auto item : ctx->print_list()->print_item()) {
			// distinguish between string literal and expression
			if (item->STRING_LITERAL()) {
				std::cout << item->STRING_LITERAL()->getText();
			}
			else {
				std::cout << item->expression()->getText();
			}
		}
		std::cout << std::endl;
		return visitChildren(ctx);
	}

	// visit a loop statement
	antlrcpp::Any visitLoop(duckyParserParser::LoopContext *ctx) override {
		std::cout << "While loop: " << ctx->expression()->getText() << std::endl;
		return visitChildren(ctx);
	}

	// visit an if condition
	antlrcpp::Any visitCondition(duckyParserParser::ConditionContext *ctx) override {
		std::cout << "If condition: " << ctx->expression()->getText() << std::endl;
		if (ctx->else_block()) {
			std::cout << "Has an else block." << std::endl;
		}
		return visitChildren(ctx);
	}
};

int main(int argc, const char *argv[]) {
	// check if an input file was provided
	if (argc < 2) {
		std::cerr << "Please provide an input file as an argument." << std::endl;
		return 1;
	}

	// open the input file
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open the file: " << argv[1] << std::endl;
		return 1;
	}

	// create ANTLR input stream from the file
	ANTLRInputStream input(inputFile);
	duckyLexer lexer(&input);          // instantiate the lexer
	CommonTokenStream tokens(&lexer);  // create a token stream
	duckyParserParser parser(&tokens); // instantiate the parser

	// parse the file to get the parse tree
	tree::ParseTree *tree = parser.program();

	// create a visitor instance and visit the tree
	DuckyVisitor visitor;
	visitor.visit(tree);

	// print the parse tree in text format
	std::cout << tree->toStringTree(&parser) << std::endl;

	// export the tree to .dot format for graphical visualization
	std::ofstream out("tree.dot");

	// start a counter for node id (to ensure only positive ids)
	int nodeCounter = 1;

	// write the .dot format tree
	out << "digraph G {" << std::endl;

	std::function<void(tree::ParseTree *, int)> writeNode = [&](tree::ParseTree *node, int nodeId) {
		// escape any quotes in the node label
		std::string label = escapeQuotes(antlr4::tree::Trees::getNodeText(node, &parser));

		// write each node with a unique positive id
		out << "  node" << nodeId << " [label=\"" << label << "\"];" << std::endl;

		// write connections to child nodes
		for (size_t i = 0; i < node->children.size(); i++) {
			int childId = ++nodeCounter;
			out << "  node" << nodeId << " -> node" << childId << ";" << std::endl;
			writeNode(node->children[i], childId); // recursive call
		}
	};

	// start writing from the root node (ID 1)
	writeNode(tree, 1);

	// Close the .dot graph
	out << "}" << std::endl;
	out.close();

	std::cout << "Parse tree exported to 'tree.dot'." << std::endl;

	return 0;
}
