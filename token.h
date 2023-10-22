#pragma once

typedef enum tokenType
{
	OP_RETURNS,
	OP_EQUALS,
	OP_ASSIGN,
	OP_GT,
	OP_LT,
	OP_GE,
	OP_LE,
	OP_LPAREN,
	OP_RPAREN,
	OP_LBRACE,
	OP_RBRACE,
	OP_PLUS,
	OP_MINUS,
	OP_MULT,
	OP_DIVF,
	OP_COMMA,
	OP_NEWLINE,
	OP_COLON,
	OP_SCOLON,
	OP_DOT,

	KW_IMPORT,
	KW_FUNC,
	KW_IF,
	KW_WHILE,
	KW_CLASS,

	L_INTEGER_8,
	L_INTEGER_16,
	L_INTEGER_2,
	L_INTEGER_10,
	L_STRING,
	IDENTIFIER,
	REJECTED,

	INVALID
} tokenType;

typedef struct token
{
	tokenType type;
	char *value; // this will store the string
} token;

void init_token_array(void);

token *get_token_array(void);

void push_token_array(tokenType type, char *data);

void delete_token_array(void);

char print_token_array(void);