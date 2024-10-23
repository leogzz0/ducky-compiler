lexer grammar duckyLexer;

/* lexer rules */

MAIN_FUNC    : 'program';
VARS         : 'vars';
MAIN_BLOCK   : 'main';
END_BLOCK    : 'end';
INTEGER_TYPE : 'int';
FLOAT_TYPE   : 'float';
PRINT        : 'print';
WHILE        : 'while';
DO           : 'do';
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
    : '"' ~["\r\n]* '"'
    ;

WS
    : [ \t\r\n]+ -> skip
    ;

COMMENT
    : '//' ~[\r\n]* -> skip
    ;
