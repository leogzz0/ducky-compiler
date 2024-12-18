grammar ducky;

/* Lexer Rules */
MAIN_FUNC    : 'program';
VARS         : 'var';
MAIN_BLOCK   : 'main';
END_BLOCK    : 'end';
INTEGER_TYPE : 'int';
FLOAT_TYPE   : 'float';
PRINT        : 'print';
WHILE        : 'while';
IF           : 'if';
ELSE         : 'else';
FUNCTION     : 'function';
ASSIGN       : '=';
SEMI         : ';';
COLON        : ':';
COMMA        : ',';
LPAREN       : '(';
RPAREN       : ')';
LBRACE       : '{';
RBRACE       : '}';
PLUS         : '+';
MINUS        : '-';
MULT         : '*';
DIV          : '/';
GREATER_THAN : '>';
LESS_THAN    : '<';
NOT_EQUAL    : '!=';
EQUAL        : '==';

ID
    : [a-zA-Z][a-zA-Z0-9_]*
    ;
INTEGER_CONSTANT
    : [0-9]+
    ;
FLOAT_CONSTANT
    : [0-9]+ '.' [0-9]+
    ;
STRING_LITERAL
    : '"' ('\\' . | ~["\\\r\n])* '"'
    ;

WS
    : [ \t\r\n]+ -> skip
    ;
COMMENT
    : '//' ~[\r\n]* -> skip
    ;

/* Parser Rules */
program
    : MAIN_FUNC ID SEMI var_declarations? func_declarations MAIN_BLOCK LBRACE body RBRACE END_BLOCK
    ;

var_declarations
    : var_decl*
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
    : FUNCTION ID LPAREN param_list RPAREN LBRACE var_declarations? body RBRACE SEMI
    ;

param_list
    : param (COMMA param)*
    |   /* empty */
    ;

param
    : ID COLON data_type
    ;

body
    : statement*
    ;

statement
    : assignment
    | condition
    | loop
    | function_call
    | print
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
    : WHILE LPAREN expression RPAREN LBRACE body RBRACE SEMI
    ;

condition
    : IF LPAREN expression RPAREN LBRACE body RBRACE (ELSE LBRACE body RBRACE)? SEMI
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
    : LPAREN expression RPAREN
    | (PLUS | MINUS)? (constant | ID)
    ;

constant
    : FLOAT_CONSTANT
    | INTEGER_CONSTANT
    ;