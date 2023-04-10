#include "main.h"

/**
 *_strstr - this is a string function usually reffered to as
 *	needle in the haystack. it locates a particular string in
 *	another string
 *@haystack: this is a group of string to be searched
 *@needle: is the string to locate
 *
 * Return: returns 1 when the needle is found or 1
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
