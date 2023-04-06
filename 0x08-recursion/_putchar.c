#include "main.h"
#include <unistd.h>

/**
 *_putchar - is used to output content
 *
 * @c: is a character pointer
 *Return: returns 1 when program runs correctly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
