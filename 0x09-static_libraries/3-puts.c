#include "main.h"

/**
 *_puts - this enables output of strings and characters
 *@str: this is a string literal parameter
 *
 * Return: returns a value after execution
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
