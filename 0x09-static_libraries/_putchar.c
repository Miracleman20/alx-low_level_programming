#include <unistd.h>

/**
 *_putchar - this function outputs character strings
 *@c: this is a function parameter that stands for character
 *
 *Return: returns 1 when execution successful
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
