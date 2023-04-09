#include "main.h"

/**
 *_isupper - is a function that outputs capital letters
 *@c: is the character holder as well as the fubction parameter
 *
 *Return: this returns 1 on successful execution of the code program
 */

int _isupper(int c)
{
	/* this line basically uses the ascii values to detect type of letter */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
