#include "main.h"

/**
 *_strspn - this is a string function that returns
 *	index of substring
 *@s: this is the string paarameter
 *@accept: this is prefix to be searched
 *
 *Return: returns 1 on program success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
	s++;
	}

	return (bytes);
}
