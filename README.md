# Ducky Compiler

The Ducky Compiler is a C++ implementation designed for the Ducky programming language. It combines various compilation stages, including lexical analysis, syntax parsing, semantic checks, intermediate code generation, and execution, providing a complete end-to-end compiler workflow.

## Overview

Built with educational goals in mind, the Ducky Compiler demonstrates the core concepts of compiling a language from source code to execution. It tokenizes input during lexical analysis, ensures structural correctness with syntax parsing, validates logic and type rules through semantic checks, and generates intermediate representations for execution. Additionally, the compiler includes robust error handling, making it a powerful learning tool for understanding compiler design.

## Features

- **Lexical Analysis**: Tokenizes source code into meaningful tokens
- **Syntax Parser**: Constructs an Abstract Syntax Tree (AST)
- **Semantic Analysis**: Performs type checking and validates program correctness
- **Intermediate Code Generation**: Generates quadruples (four-address code)
- **Virtual Machine**: Executes the generated quadruples
- **Virtual Memory Management**: Manages memory segments for different variable types
- **Basic Control Structures**: Support for if statements and loops
- **Primitive Types**: Handles integers and basic arithmetic operations

### Compilation Process
1. **Lexical Analysis**: Converts source code into tokens
2. **Syntax Analysis**: Creates Abstract Syntax Tree
3. **Semantic Analysis**: Performs type checking and scope validation
4. **Intermediate Code Generation**: Generates quadruples

### Virtual Machine
- Executes quadruples (four-address code)
- Manages virtual memory segments:
  - Global variables
  - Local variables
  - Temporary variables
  - Constants
- Implements instruction set for:
  - Arithmetic operations
  - Logical operations
  - Control flow
  - Input/Output operations

### Quadruple Structure
Each quadruple contains:
- Operator
- Left operand
- Right operand
- Result

## Contact

Leonardo González - [@leogzz0](https://github.com/leogzz0)

Project Link: [https://github.com/leogzz0/ducky-compiler](https://github.com/leogzz0/ducky-compiler)