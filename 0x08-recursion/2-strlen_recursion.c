#include "main.h"

/**
 *_strlen_recursion - recursion function to return the length of a string
 *@s: is the character string of the recursive function
 *
 *Return: returns 1 when program executes correctly
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		c += _strlen_recursion(s + 1);
	}
	return (c);
}
