#include "main.h"

/**
 *_strlen - is for string length
 *@s: is the string parameter in func
 *
 *Return: returns 1 for correct execution
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

