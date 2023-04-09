#include "main.h"

/**
 *_memcpy - this is a function that copies the values from one
 *	parameter value to another
 *@dest: is the destination paramter of the function for the string
 *@src: is a paramter that is on the receiving end of the function
 *@n: is for the integer size in bytes of the characters
 *
 * Return: determnes the output for success and failures
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
