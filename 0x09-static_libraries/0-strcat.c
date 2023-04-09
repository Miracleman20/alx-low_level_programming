#include "main.h"

/**
 *_strcat - this function copies a string from one to
 *	another variable or location
 *@dest: this represents a paramter that is the destination of the string
 *@src: this is the source of the string
 *
 *Return: Retiurns 1
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dlen = 0;

	while (dest[index++])
		dlen++;

	for (index = 0; src[index]; index++)
		dest[dlen++] = src[index];

	return (dest);
}
