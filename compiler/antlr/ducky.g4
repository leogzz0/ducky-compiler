grammar ducky;

c

/* Parser Rules */

program
    : MAIN_FUNC ID SEMI var_declarations func_declarations MAIN_BLOCK LPAREN RPAREN block END_BLOCK
    ;

var_declarations
    : (var_decl)+
    ;

var_decl
    : VARS var_list COLON data_type SEMI
    ;

var_list
    : ID (COMMA ID)*
    ;

data_type
    : INTEGER_TYPE
    | FLOAT_TYPE
    ;

func_declarations
    : func_decl*
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
    | var_decl
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
    : WHILE LPAREN expression RPAREN block
    ;

condition
    : IF LPAREN expression RPAREN block else_block
    ;

else_block
    : ELSE block
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
    : exp (comparison_operator exp)?
    ;

comparison_operator
    : GREATER_THAN
    | LESS_THAN
    | NOT_EQUAL
    | EQUAL
    ;

exp
    : term ((PLUS | MINUS) term)*
    ;

term
    : factor ((MULT | DIV) factor)*
    ;

factor
    : (PLUS | MINUS)? (constant | ID)
    | LPAREN expression RPAREN
    ;

constant
    : FLOAT_CONSTANT
    | INTEGER_CONSTANT
    ;
