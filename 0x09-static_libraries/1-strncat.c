#include "main.h"

/**
 *_strncat - is a string concatenation string function
 *@dest: is the destination in the function of string
 *@n: is the length of the string in the function being tested
 *@src: is the source string
 *
 * Return: is the return value for the function
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[dlen++] = src[index];
	return (dest);
}
