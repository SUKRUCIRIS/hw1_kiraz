#include "all_class_tokens.h"
#include <stdlib.h>

struct OP_RETURNS
{
	token *base;
};

struct OP_EQUALS
{
	token *base;
};

struct OP_ASSIGN
{
	token *base;
};

struct OP_GT
{
	token *base;
};

struct OP_LT
{
	token *base;
};

struct OP_GE
{
	token *base;
};

struct OP_LE
{
	token *base;
};

struct OP_LPAREN
{
	token *base;
};

struct OP_RPAREN
{
	token *base;
};

struct OP_LBRACE
{
	token *base;
};

struct OP_RBRACE
{
	token *base;
};

struct OP_PLUS
{
	token *base;
};

struct OP_MINUS
{
	token *base;
};

struct OP_MULT
{
	token *base;
};

struct OP_DIVF
{
	token *base;
};

struct OP_COMMA
{
	token *base;
};

struct OP_NEWLINE
{
	token *base;
};

struct OP_COLON
{
	token *base;
};

struct OP_SCOLON
{
	token *base;
};

struct OP_DOT
{
	token *base;
};

struct KW_IMPORT
{
	token *base;
};

struct KW_FUNC
{
	token *base;
};

struct KW_IF
{
	token *base;
};

struct KW_WHILE
{
	token *base;
};

struct KW_CLASS
{
	token *base;
};

struct L_INTEGER_8
{
	token *base;
};

struct L_INTEGER_16
{
	token *base;
};

struct L_INTEGER_2
{
	token *base;
};

struct L_INTEGER_10
{
	token *base;
};

struct L_STRING
{
	token *base;
};

struct IDENTIFIER
{
	token *base;
};

struct INVALID
{
	token *base;
};

OP_RETURNS *constructor_OP_RETURNS(void)
{
	OP_RETURNS *x = malloc(sizeof(OP_RETURNS));
	x->base = constructor_token(E_OP_RETURNS, x, 0);
	return x;
}

OP_EQUALS *constructor_OP_EQUALS(void)
{
	OP_EQUALS *x = malloc(sizeof(OP_EQUALS));
	x->base = constructor_token(E_OP_EQUALS, x, 0);
	return x;
}

OP_ASSIGN *constructor_OP_ASSIGN(void)
{
	OP_ASSIGN *x = malloc(sizeof(OP_ASSIGN));
	x->base = constructor_token(E_OP_ASSIGN, x, 0);
	return x;
}

OP_GT *constructor_OP_GT(void)
{
	OP_GT *x = malloc(sizeof(OP_GT));
	x->base = constructor_token(E_OP_GT, x, 0);
	return x;
}

OP_LT *constructor_OP_LT(void)
{
	OP_LT *x = malloc(sizeof(OP_LT));
	x->base = constructor_token(E_OP_LT, x, 0);
	return x;
}

OP_GE *constructor_OP_GE(void)
{
	OP_GE *x = malloc(sizeof(OP_GE));
	x->base = constructor_token(E_OP_GE, x, 0);
	return x;
}

OP_LE *constructor_OP_LE(void)
{
	OP_LE *x = malloc(sizeof(OP_LE));
	x->base = constructor_token(E_OP_LE, x, 0);
	return x;
}

OP_LPAREN *constructor_OP_LPAREN(void)
{
	OP_LPAREN *x = malloc(sizeof(OP_LPAREN));
	x->base = constructor_token(E_OP_LPAREN, x, 0);
	return x;
}

OP_RPAREN *constructor_OP_RPAREN(void)
{
	OP_RPAREN *x = malloc(sizeof(OP_RPAREN));
	x->base = constructor_token(E_OP_RPAREN, x, 0);
	return x;
}

OP_LBRACE *constructor_OP_LBRACE(void)
{
	OP_LBRACE *x = malloc(sizeof(OP_LBRACE));
	x->base = constructor_token(E_OP_LBRACE, x, 0);
	return x;
}

OP_RBRACE *constructor_OP_RBRACE(void)
{
	OP_RBRACE *x = malloc(sizeof(OP_RBRACE));
	x->base = constructor_token(E_OP_RBRACE, x, 0);
	return x;
}

OP_PLUS *constructor_OP_PLUS(void)
{
	OP_PLUS *x = malloc(sizeof(OP_PLUS));
	x->base = constructor_token(E_OP_PLUS, x, 0);
	return x;
}

OP_MINUS *constructor_OP_MINUS(void)
{
	OP_MINUS *x = malloc(sizeof(OP_MINUS));
	x->base = constructor_token(E_OP_MINUS, x, 0);
	return x;
}

OP_MULT *constructor_OP_MULT(void)
{
	OP_MULT *x = malloc(sizeof(OP_MULT));
	x->base = constructor_token(E_OP_MULT, x, 0);
	return x;
}

OP_DIVF *constructor_OP_DIVF(void)
{
	OP_DIVF *x = malloc(sizeof(OP_DIVF));
	x->base = constructor_token(E_OP_DIVF, x, 0);
	return x;
}

OP_COMMA *constructor_OP_COMMA(void)
{
	OP_COMMA *x = malloc(sizeof(OP_COMMA));
	x->base = constructor_token(E_OP_COMMA, x, 0);
	return x;
}

OP_NEWLINE *constructor_OP_NEWLINE(void)
{
	OP_NEWLINE *x = malloc(sizeof(OP_NEWLINE));
	x->base = constructor_token(E_OP_NEWLINE, x, 0);
	return x;
}

OP_COLON *constructor_OP_COLON(void)
{
	OP_COLON *x = malloc(sizeof(OP_COLON));
	x->base = constructor_token(E_OP_COLON, x, 0);
	return x;
}

OP_SCOLON *constructor_OP_SCOLON(void)
{
	OP_SCOLON *x = malloc(sizeof(OP_SCOLON));
	x->base = constructor_token(E_OP_SCOLON, x, 0);
	return x;
}

OP_DOT *constructor_OP_DOT(void)
{
	OP_DOT *x = malloc(sizeof(OP_DOT));
	x->base = constructor_token(E_OP_DOT, x, 0);
	return x;
}

KW_IMPORT *constructor_KW_IMPORT(void)
{
	KW_IMPORT *x = malloc(sizeof(KW_IMPORT));
	x->base = constructor_token(E_KW_IMPORT, x, 0);
	return x;
}

KW_FUNC *constructor_KW_FUNC(void)
{
	KW_FUNC *x = malloc(sizeof(KW_FUNC));
	x->base = constructor_token(E_KW_FUNC, x, 0);
	return x;
}

KW_IF *constructor_KW_IF(void)
{
	KW_IF *x = malloc(sizeof(KW_IF));
	x->base = constructor_token(E_KW_IF, x, 0);
	return x;
}

KW_WHILE *constructor_KW_WHILE(void)
{
	KW_WHILE *x = malloc(sizeof(KW_WHILE));
	x->base = constructor_token(E_KW_WHILE, x, 0);
	return x;
}

KW_CLASS *constructor_KW_CLASS(void)
{
	KW_CLASS *x = malloc(sizeof(KW_CLASS));
	x->base = constructor_token(E_KW_CLASS, x, 0);
	return x;
}

L_INTEGER_8 *constructor_L_INTEGER_8(char *data)
{
	L_INTEGER_8 *x = malloc(sizeof(L_INTEGER_8));
	x->base = constructor_token(E_L_INTEGER_8, x, data);
	return x;
}

L_INTEGER_16 *constructor_L_INTEGER_16(char *data)
{
	L_INTEGER_16 *x = malloc(sizeof(L_INTEGER_16));
	x->base = constructor_token(E_L_INTEGER_16, x, data);
	return x;
}

L_INTEGER_2 *constructor_L_INTEGER_2(char *data)
{
	L_INTEGER_2 *x = malloc(sizeof(L_INTEGER_2));
	x->base = constructor_token(E_L_INTEGER_2, x, data);
	return x;
}

L_INTEGER_10 *constructor_L_INTEGER_10(char *data)
{
	L_INTEGER_10 *x = malloc(sizeof(L_INTEGER_10));
	x->base = constructor_token(E_L_INTEGER_10, x, data);
	return x;
}

L_STRING *constructor_L_STRING(char *data)
{
	L_STRING *x = malloc(sizeof(L_STRING));
	x->base = constructor_token(E_L_STRING, x, data);
	return x;
}

IDENTIFIER *constructor_IDENTIFIER(char *data)
{
	IDENTIFIER *x = malloc(sizeof(IDENTIFIER));
	x->base = constructor_token(E_IDENTIFIER, x, data);
	return x;
}

INVALID *constructor_INVALID(char *data)
{
	INVALID *x = malloc(sizeof(INVALID));
	x->base = constructor_token(E_INVALID, x, data);
	return x;
}

void deconstructor_OP_RETURNS(OP_RETURNS *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_EQUALS(OP_EQUALS *x)
{
	deconstructor_token(x->base);
}
void deconstructor_OP_ASSIGN(OP_ASSIGN *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_GT(OP_GT *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_LT(OP_LT *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_GE(OP_GE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_LE(OP_LE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_LPAREN(OP_LPAREN *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_RPAREN(OP_RPAREN *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_LBRACE(OP_LBRACE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_RBRACE(OP_RBRACE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_PLUS(OP_PLUS *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_MINUS(OP_MINUS *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_MULT(OP_MULT *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_DIVF(OP_DIVF *x)
{
	deconstructor_token(x->base);
}
void deconstructor_OP_COMMA(OP_COMMA *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_NEWLINE(OP_NEWLINE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_COLON(OP_COLON *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_SCOLON(OP_SCOLON *x)
{
	deconstructor_token(x->base);
}

void deconstructor_OP_DOT(OP_DOT *x)
{
	deconstructor_token(x->base);
}

void deconstructor_KW_IMPORT(KW_IMPORT *x)
{
	deconstructor_token(x->base);
}

void deconstructor_KW_FUNC(KW_FUNC *x)
{
	deconstructor_token(x->base);
}

void deconstructor_KW_IF(KW_IF *x)
{
	deconstructor_token(x->base);
}

void deconstructor_KW_WHILE(KW_WHILE *x)
{
	deconstructor_token(x->base);
}

void deconstructor_KW_CLASS(KW_CLASS *x)
{
	deconstructor_token(x->base);
}

void deconstructor_L_INTEGER_8(L_INTEGER_8 *x)
{
	deconstructor_token(x->base);
}

void deconstructor_L_INTEGER_16(L_INTEGER_16 *x)
{
	deconstructor_token(x->base);
}

void deconstructor_L_INTEGER_2(L_INTEGER_2 *x)
{
	deconstructor_token(x->base);
}

void deconstructor_L_INTEGER_10(L_INTEGER_10 *x)
{
	deconstructor_token(x->base);
}

void deconstructor_L_STRING(L_STRING *x)
{
	deconstructor_token(x->base);
}

void deconstructor_IDENTIFIER(IDENTIFIER *x)
{
	deconstructor_token(x->base);
}

void deconstructor_INVALID(INVALID *x)
{
	deconstructor_token(x->base);
}