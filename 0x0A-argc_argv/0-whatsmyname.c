#include <stdio.h>

/**
 *main - entry point of an argument o a function
 *@argc: is the first argument
 *@argv: second argument in the function
 *
 * Return: returns a positive value on execution
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
