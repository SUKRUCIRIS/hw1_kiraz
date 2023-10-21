#include <stdio.h>
#include "token.h"
#include "hw1-lexer.h"

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

	int ret = 0;
	if ((ret = yylex()))
	{
		printf("%d\n", ret);
		return 3;
	}

	print_token_array();

	delete_token_array();

	return 0;
}