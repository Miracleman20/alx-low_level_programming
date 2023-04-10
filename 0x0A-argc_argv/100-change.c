#include <stdio.h>

/**
 *main- deepicts the entry point of a function
 *@argc: argc is an interger function parameter
 *@argv: is an array of c strings in the function
 *
 *Return: this is a return value of the function
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
