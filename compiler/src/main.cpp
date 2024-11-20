#include <fstream>
#include <iostream>
#include <sstream>

#include "../antlr/duckyLexer.h"
#include "../antlr/duckyParser.h"
#include "../include/listener/DuckyCustomListener.h"
#include "../include/semantic/FunctionDirectory.h"
#include "../include/semantic/SemanticCube.h"
#include "../include/semantic/VariableTable.h"
#include "../include/memory/VirtualMemory.h"

void printQuadruple(const std::tuple<std::string, int, int, int>& quad) {
    std::cout << "(" << std::get<0>(quad) << ", " << std::get<1>(quad) << ", " << std::get<2>(quad) << ", " << std::get<3>(quad) << ")\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    try {
        // Read input file
        std::ifstream stream;
        stream.open(argv[1]);
        if (!stream.is_open()) {
            throw std::runtime_error("Could not open input file: " + std::string(argv[1]));
        }

        // Create lexer and parser
        antlr4::ANTLRInputStream input(stream);
        duckyLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        duckyParser parser(&tokens);

        // Create and register custom listener
        DuckyCustomListener listener(true);

        parser.addParseListener(&listener);
        
        // Parse and traverse
        antlr4::tree::ParseTree* tree = parser.program();

        if (parser.getNumberOfSyntaxErrors() > 0) {
            throw std::runtime_error("Syntax errors found during parsing");
        }

        // Print generated quadruples
        std::cout << "\nGenerated Quadruples:\n";
        const auto& quadruples = listener.getQuadruples();
        for (size_t i = 0; i < quadruples.size(); ++i) {
            std::cout << i << ": ";
            printQuadruple(quadruples[i]);
        }

        // Print memory state
        listener.getMemoryManager().printMemory();

        return 0;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
}