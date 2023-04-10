#include <stdio.h>
#include <stdlib.h>

/**
 *main - is the function call
 *@argc: is the integer parameter
 *@argv: is the string or char parameter
 *
 *Return: returns positive value
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
