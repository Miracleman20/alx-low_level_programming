#include "main.h"

/**
 *_memset - this is a function that sets to copy content
 *	from the paramenter using the string param
 *@s: is the parameter used to copu characters to b
 *@b: is the parameter wherer the data wil be copied to int the function
 *@n: is the sia=ze of bytes of the characters to be copied
 *
 * Return: this returns a positive value when the execution is correct
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
