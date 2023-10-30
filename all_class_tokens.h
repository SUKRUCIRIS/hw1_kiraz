#pragma once
#include "base_class_token.h"

typedef struct OP_RETURNS OP_RETURNS;
typedef struct OP_EQUALS OP_EQUALS;
typedef struct OP_ASSIGN OP_ASSIGN;
typedef struct OP_GT OP_GT;
typedef struct OP_LT OP_LT;
typedef struct OP_GE OP_GE;
typedef struct OP_LE OP_LE;
typedef struct OP_LPAREN OP_LPAREN;
typedef struct OP_RPAREN OP_RPAREN;
typedef struct OP_LBRACE OP_LBRACE;
typedef struct OP_RBRACE OP_RBRACE;
typedef struct OP_PLUS OP_PLUS;
typedef struct OP_MINUS OP_MINUS;
typedef struct OP_MULT OP_MULT;
typedef struct OP_DIVF OP_DIVF;
typedef struct OP_COMMA OP_COMMA;
typedef struct OP_NEWLINE OP_NEWLINE;
typedef struct OP_COLON OP_COLON;
typedef struct OP_SCOLON OP_SCOLON;
typedef struct OP_DOT OP_DOT;
typedef struct KW_IMPORT KW_IMPORT;
typedef struct KW_FUNC KW_FUNC;
typedef struct KW_IF KW_IF;
typedef struct KW_WHILE KW_WHILE;
typedef struct KW_CLASS KW_CLASS;
typedef struct L_INTEGER_8 L_INTEGER_8;
typedef struct L_INTEGER_16 L_INTEGER_16;
typedef struct L_INTEGER_2 L_INTEGER_2;
typedef struct L_INTEGER_10 L_INTEGER_10;
typedef struct L_STRING L_STRING;
typedef struct IDENTIFIER IDENTIFIER;
typedef struct INVALID INVALID;

OP_RETURNS *constructor_OP_RETURNS(void);

OP_EQUALS *constructor_OP_EQUALS(void);

OP_ASSIGN *constructor_OP_ASSIGN(void);

OP_GT *constructor_OP_GT(void);

OP_LT *constructor_OP_LT(void);

OP_GE *constructor_OP_GE(void);

OP_LE *constructor_OP_LE(void);

OP_LPAREN *constructor_OP_LPAREN(void);

OP_RPAREN *constructor_OP_RPAREN(void);

OP_LBRACE *constructor_OP_LBRACE(void);

OP_RBRACE *constructor_OP_RBRACE(void);

OP_PLUS *constructor_OP_PLUS(void);

OP_MINUS *constructor_OP_MINUS(void);

OP_MULT *constructor_OP_MULT(void);

OP_DIVF *constructor_OP_DIVF(void);

OP_COMMA *constructor_OP_COMMA(void);

OP_NEWLINE *constructor_OP_NEWLINE(void);

OP_COLON *constructor_OP_COLON(void);

OP_SCOLON *constructor_OP_SCOLON(void);

OP_DOT *constructor_OP_DOT(void);

KW_IMPORT *constructor_KW_IMPORT(void);

KW_FUNC *constructor_KW_FUNC(void);

KW_IF *constructor_KW_IF(void);

KW_WHILE *constructor_KW_WHILE(void);

KW_CLASS *constructor_KW_CLASS(void);

L_INTEGER_8 *constructor_L_INTEGER_8(char *data);

L_INTEGER_16 *constructor_L_INTEGER_16(char *data);

L_INTEGER_2 *constructor_L_INTEGER_2(char *data);

L_INTEGER_10 *constructor_L_INTEGER_10(char *data);

L_STRING *constructor_L_STRING(char *data);

IDENTIFIER *constructor_IDENTIFIER(char *data);

INVALID *constructor_INVALID(char *data);

void deconstructor_OP_RETURNS(OP_RETURNS *x);

void deconstructor_OP_EQUALS(OP_EQUALS *x);

void deconstructor_OP_ASSIGN(OP_ASSIGN *x);

void deconstructor_OP_GT(OP_GT *x);

void deconstructor_OP_LT(OP_LT *x);

void deconstructor_OP_GE(OP_GE *x);

void deconstructor_OP_LE(OP_LE *x);

void deconstructor_OP_LPAREN(OP_LPAREN *x);

void deconstructor_OP_RPAREN(OP_RPAREN *x);

void deconstructor_OP_LBRACE(OP_LBRACE *x);

void deconstructor_OP_RBRACE(OP_RBRACE *x);

void deconstructor_OP_PLUS(OP_PLUS *x);

void deconstructor_OP_MINUS(OP_MINUS *x);

void deconstructor_OP_MULT(OP_MULT *x);

void deconstructor_OP_DIVF(OP_DIVF *x);

void deconstructor_OP_COMMA(OP_COMMA *x);

void deconstructor_OP_NEWLINE(OP_NEWLINE *x);

void deconstructor_OP_COLON(OP_COLON *x);

void deconstructor_OP_SCOLON(OP_SCOLON *x);

void deconstructor_OP_DOT(OP_DOT *x);

void deconstructor_KW_IMPORT(KW_IMPORT *x);

void deconstructor_KW_FUNC(KW_FUNC *x);

void deconstructor_KW_IF(KW_IF *x);

void deconstructor_KW_WHILE(KW_WHILE *x);

void deconstructor_KW_CLASS(KW_CLASS *x);

void deconstructor_L_INTEGER_8(L_INTEGER_8 *x);

void deconstructor_L_INTEGER_16(L_INTEGER_16 *x);

void deconstructor_L_INTEGER_2(L_INTEGER_2 *x);

void deconstructor_L_INTEGER_10(L_INTEGER_10 *x);

void deconstructor_L_STRING(L_STRING *x);

void deconstructor_IDENTIFIER(IDENTIFIER *x);

void deconstructor_INVALID(INVALID *x);