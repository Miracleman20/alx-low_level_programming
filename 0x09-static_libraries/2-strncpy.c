#include "main.h"

/**
 *_strncpy - this is to copy a string too deternibe height
 *@dest: is the file destination
 *@src: is the content or character
 *@n: this represents length
 *
 * Return: returns 1
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
