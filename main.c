#include <stdio.h>
#include "token.h"
#include "kiraz-lexer.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s <input_file>\n", argv[0]);
		return 1;
	}

	init_token_array();

	yyin = fopen(argv[1], "rb");
	if (!yyin)
	{
		printf("File can't be opened.\n");
		return 2;
	}

	int tok = 0;
	while ((tok = yylex()))
	{
		printf("%d\n", tok);
	}

	if (print_token_array() != 0)
	{
		delete_token_array();
		return 3; // there is invalid token
	}

	delete_token_array();
	return 0;
}