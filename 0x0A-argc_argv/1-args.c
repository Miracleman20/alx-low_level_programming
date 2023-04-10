#include <stdio.h>

/**
 *main - entry point
 *@argc: argumnet integer
 *@argv: character or string argumnet in array form
 *
 *Return: returns integer 1 value
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

