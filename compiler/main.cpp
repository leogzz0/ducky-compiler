#include "antlr4-runtime.h"
#include "antlr/duckyLexer.h"
#include "antlr/duckyParser.h"
#include "antlr/duckyBaseListener.h"
#include "antlr/duckyListener.h"
#include <fstream>
#include <iostream>
#include <functional>
#include <string>

using namespace antlr4;

// Helper function to escape double quotes in labels
std::string escapeQuotes(const std::string &label)
{
	std::string escapedLabel = label;
	size_t pos = 0;
	while ((pos = escapedLabel.find("\"", pos)) != std::string::npos)
	{
		escapedLabel.insert(pos, "\\");
		pos += 2; // Move past the escaped quote
	}
	return escapedLabel;
}

// Custom listener class derived from duckyBaseListener
class DuckyCustomListener : public duckyBaseListener
{
public:
	// Override methods for various grammar rules as needed

	// Called when entering the program rule
	void enterProgram(duckyParser::ProgramContext *ctx) override
	{
		std::cout << "Entering program: " << ctx->ID()->getText() << std::endl;
	}

	// Called when exiting a variable declaration
	void exitVar_decl(duckyParser::Var_declContext *ctx) override
	{
		std::cout << "Variable declaration: ";
		for (auto id : ctx->var_list()->ID())
		{
			std::cout << id->getText() << " "; // Print each variable id
		}
		std::cout << ": " << ctx->data_type()->getText() << std::endl;
	}

	// Called when exiting an assignment
	void exitAssignment(duckyParser::AssignmentContext *ctx) override
	{
		std::cout << "Assignment: " << ctx->ID()->getText() << " = " << ctx->expression()->getText() << std::endl;
	}

	// Called when exiting a print statement
	void exitPrint(duckyParser::PrintContext *ctx) override
	{
		std::cout << "Print: ";
		for (auto item : ctx->print_list()->print_item())
		{
			// Distinguish between string literal and expression
			if (item->STRING_LITERAL())
			{
				std::cout << item->STRING_LITERAL()->getText();
			}
			else
			{
				std::cout << item->expression()->getText();
			}
		}
		std::cout << std::endl;
	}

	// Called when exiting a loop
	void exitLoop(duckyParser::LoopContext *ctx) override
	{
		std::cout << "While loop: " << ctx->expression()->getText() << std::endl;
	}

	// Called when exiting an if condition
	void exitCondition(duckyParser::ConditionContext *ctx) override
	{
		std::cout << "If condition: " << ctx->expression()->getText() << std::endl;
		if (ctx->else_block())
		{
			std::cout << "Has an else block." << std::endl;
		}
	}
};

int main(int argc, const char *argv[])
{
	// Check if an input file was provided
	if (argc < 2)
	{
		std::cerr << "Please provide an input file as an argument." << std::endl;
		return 1;
	}

	// Open the input file
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open the file: " << argv[1] << std::endl;
		return 1;
	}

	// Create ANTLR input stream from the file
	ANTLRInputStream input(inputFile);
	duckyLexer lexer(&input);		  // Instantiate the lexer
	CommonTokenStream tokens(&lexer); // Create a token stream
	duckyParser parser(&tokens);	  // Instantiate the parser

	// Parse the file to get the parse tree
	tree::ParseTree *tree = parser.program();

	// Create a custom listener instance
	DuckyCustomListener listener;

	// Create a parse tree walker and walk the tree with the listener
	tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	// Export the parse tree in .dot format for graphical visualization
	std::ofstream out("tree.dot");

	// Start a counter for node ID (to ensure only positive IDs)
	int nodeCounter = 1;

	// Write the .dot format tree
	out << "digraph G {" << std::endl;

	std::function<void(tree::ParseTree *, int)> writeNode = [&](tree::ParseTree *node, int nodeId)
	{
		// Escape any quotes in the node label
		std::string label = escapeQuotes(antlr4::tree::Trees::getNodeText(node, &parser));

		// Write each node with a unique positive ID
		out << "  node" << nodeId << " [label=\"" << label << "\"];" << std::endl;

		// Write connections to child nodes
		for (size_t i = 0; i < node->children.size(); i++)
		{
			int childId = ++nodeCounter;
			out << "  node" << nodeId << " -> node" << childId << ";" << std::endl;
			writeNode(node->children[i], childId); // Recursive call
		}
	};

	// Start writing from the root node (ID 1)
	writeNode(tree, 1);

	// Close the .dot graph
	out << "}" << std::endl;
	out.close();

	std::cout << "Parse tree exported to 'tree.dot'." << std::endl;

	return 0;
}
