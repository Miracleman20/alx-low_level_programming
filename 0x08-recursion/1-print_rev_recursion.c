#include "main.h"

/**
 * _print_rev_recursion - function to output reverse characters
 *@s: this is a character variable for print rev function
 *
 *Return: return 1 on output of correct code
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

	else
		_putchar('\n');
}
