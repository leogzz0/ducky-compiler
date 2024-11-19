#include <fstream>
#include <iostream>
#include <sstream>

#include "../antlr/duckyLexer.h"
#include "../antlr/duckyParser.h"
#include "../include/listener/DuckyCustomListener.h"
#include "../include/semantic/FunctionDirectory.h"
#include "../include/semantic/SemanticCube.h"
#include "../include/semantic/VariableTable.h"

int main(int argc, char* argv[]) {
    // Check if filename is provided
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <filename.ducky>" << std::endl;
        return 1;
    }

    // Read the input file
    std::ifstream file;
    file.open(argv[1]);
    if (!file.is_open()) {
        std::cout << "Could not open file: " << argv[1] << std::endl;
        return 1;
    }

    // Read file into string
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();
    file.close();

    try {
        // Create the input stream
        antlr4::ANTLRInputStream input(content);
        
        // Create lexer
        duckyLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        
        // Create parser
        duckyParser parser(&tokens);
        
        // Parse the input
        antlr4::tree::ParseTree* tree = parser.program();

        if (parser.getNumberOfSyntaxErrors() > 0) {
            std::cout << "Syntax errors found!" << std::endl;
            return 1;
        }

        // Create and use custom listener
        DuckyCustomListener listener;
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

        // Print compilation results
        std::cout << "\n=== Compilation Results for " << argv[1] << " ===" << std::endl;
        listener.printTables();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}