#include "main.h"

/**
 *_strchr - this function is foor string character
 *@s: this parameter carries the code string
 *@c: this represents the character parameter
 *
 *Return: returns 1
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

