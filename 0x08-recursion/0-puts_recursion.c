#include "main.h"

/**
 *_puts_recursion - outputs the recursion value of a string
 * @s: represents a character pointer
 *
 *Return - returns 1 when program executes sucesfully
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
