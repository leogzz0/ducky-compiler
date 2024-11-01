#include <fstream>
#include <iostream>

#include "../antlr/duckyLexer.h"
#include "../antlr/duckyParser.h"
#include "../include/listener/DuckyCustomListener.h"
#include "../include/semantic/FunctionDirectory.h"
#include "../include/semantic/SemanticCube.h"
#include "../include/semantic/VariableTable.h"
#include "../include/utils/ErrorHandler.h"
#include "../include/utils/Utils.h"

using namespace antlr4;

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

    // create the ANTLR input stream from the file
    ANTLRInputStream input(inputFile);
    duckyLexer lexer(&input);             // init the lexer
    CommonTokenStream tokens(&lexer);     // create the token stream
    duckyParser parser(&tokens);          // init the parser

    // parse the file to get the parse tree
    tree::ParseTree *tree = parser.program();

    // init dependencies for semantic analysis
    VariableTable variableTable;
    ErrorHandler errorHandler;
    FunctionDirectory functionDirectory;
    SemanticCube semanticCube(errorHandler);

    // create an instance of the custom listener
    DuckyCustomListener listener(variableTable, errorHandler, functionDirectory, semanticCube);

    // create a parse tree walker and walk the tree with the listener
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    if (errorHandler.hasErrors()) {
        std::cerr << "\nErrors found during compilation:\n";
        errorHandler.printErrors();
    } else {
        std::cout << "Compilation successful, no semantic errors found." << std::endl;
    }

    // export the parse tree in .dot format for graphical visualization (optional)
    std::ofstream out("tree.dot");
        int nodeCounter = 1;
        out << "digraph G {" << std::endl;

        // lambda function to write nodes in .dot format
        std::function<void(tree::ParseTree *, int)> writeNode = [&](tree::ParseTree *node, int nodeId) {
        // Check if the node is a terminal or a rule
        if (node->children.empty()) {
            // Terminal node (token)
            std::string label = Utils::escapeQuotes(node->getText());
            out << "  node" << nodeId << " [label=\"" << label << "\"];" << std::endl;
        } else {
            // Non-terminal node (rule)
            std::string label = Utils::sanitizeIdentifier(node->getText());
            out << "  node" << nodeId << " [label=\"" << label << "\"];" << std::endl;

            // Process each child node
            for (size_t i = 0; i < node->children.size(); i++) {
                int childId = ++nodeCounter;
                out << "  node" << nodeId << " -> node" << childId << ";" << std::endl;
                writeNode(node->children[i], childId); // Recursive call for each child
            }
        }
    };

    // start writing from the root node
    writeNode(tree, 1);

    // end with the .dot file
    out << "}" << std::endl;
    out.close();
    std::cout << "Parse tree exported to 'tree.dot'." << std::endl;

    return 0;
}
