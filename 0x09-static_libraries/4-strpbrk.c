#include "main.h"

/**
 *_isalpha - is a fuction entry point
 *@c: this is a function parameter that holds the character
 *
 *Return: returns 1 on program compilation
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
