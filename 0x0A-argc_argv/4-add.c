#include <stdio.h>
#include <stdlib.h>

/**
 *main - is the function entry point for the arguments
 *@argc: is the number of argumnets available
 *@argv: is an array of strings
 *
 *Return: returns 1
 */

int main(int argc, char **argv)
{
	int i, n, add = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += n;
		}
	}
	printf("%d\n", add);

	return (0);
}
