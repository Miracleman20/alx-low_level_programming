#include <stdio.h>

/**
 *main - main function entry point
 *@argc: argument 1
 *@argv: argument 2
 *
 *Return: returns 1
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
