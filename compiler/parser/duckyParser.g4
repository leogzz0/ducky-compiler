grammar duckyParser;

options {
    tokenVocab = duckyLexer;
}

/* parser rules */

program
    : MAIN_FUNC ID SEMI var_declarations func_declarations MAIN_BLOCK block END_BLOCK
    ;

var_declarations
    : VARS LBRACE var_decl_list RBRACE
    |   /* empty */
    ;

var_decl_list
    : var_decl+
    ;

var_decl
    : var_list COLON data_type SEMI
    ;

var_list
    : ID (COMMA ID)*
    ;

data_type
    : INTEGER_TYPE
    | FLOAT_TYPE
    ;

func_declarations
    : func_decl func_declarations
    |   /* empty */
    ;

func_decl
    : FUNCTION ID LPAREN param_list RPAREN block
    ;

param_list
    : param (COMMA param)*
    |   /* empty */
    ;

param
    : ID COLON data_type
    ;

block
    : LBRACE statements RBRACE
    ;

statements
    : statement+
    ;

statement
    : assignment
    | print
    | loop
    | condition
    | function_call
    ;

assignment
    : ID ASSIGN expression SEMI
    ;

print
    : PRINT LPAREN print_list RPAREN SEMI
    ;

print_list
    : print_item (COMMA print_item)*
    ;

print_item
    : expression
    | STRING_LITERAL
    ;

loop
    : WHILE LPAREN expression RPAREN DO block
    ;

condition
    : IF LPAREN expression RPAREN DO block else_block
    ;

else_block
    : ELSE DO block
    |   /* empty */
    ;

function_call
    : ID LPAREN arg_list RPAREN SEMI
    ;

arg_list
    : expression (COMMA expression)*
    |   /* empty */
    ;

expression
    : term (comparison_operator term)?
    ;

comparison_operator
    : GREATER_THAN
    | LESS_THAN
    | NOT_EQUAL
    | EQUAL
    ;

term
    : factor ((PLUS | MINUS) factor)*
    ;

factor
    : LPAREN expression RPAREN
    | ID
    | constant
    ;

constant
    : FLOAT_CONSTANT
    | INTEGER_CONSTANT
    ;
