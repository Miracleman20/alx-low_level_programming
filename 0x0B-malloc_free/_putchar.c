#include <unistd.h>

/**
 *putchar - used to output text content
 *@c: this is a function parameter
 *
 *Return: this retuns a value after program execution
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
