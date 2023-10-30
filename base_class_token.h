#pragma once

typedef struct token token;

typedef enum tokenType
{
	E_OP_RETURNS,
	E_OP_EQUALS,
	E_OP_ASSIGN,
	E_OP_GT,
	E_OP_LT,
	E_OP_GE,
	E_OP_LE,
	E_OP_LPAREN,
	E_OP_RPAREN,
	E_OP_LBRACE,
	E_OP_RBRACE,
	E_OP_PLUS,
	E_OP_MINUS,
	E_OP_MULT,
	E_OP_DIVF,
	E_OP_COMMA,
	E_OP_NEWLINE,
	E_OP_COLON,
	E_OP_SCOLON,
	E_OP_DOT,

	E_KW_IMPORT,
	E_KW_FUNC,
	E_KW_IF,
	E_KW_WHILE,
	E_KW_CLASS,

	E_L_INTEGER_8,
	E_L_INTEGER_16,
	E_L_INTEGER_2,
	E_L_INTEGER_10,
	E_L_STRING,
	E_IDENTIFIER,

	E_INVALID
} tokenType;

token *constructor_token(tokenType type, void *owner, char *data);

void deconstructor_token(token *tk);

char print_all_tokens_string(void);

void print_all_tokens_enum(void);

void delete_all_tokens(void);