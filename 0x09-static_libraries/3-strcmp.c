#include "main.h"

/**
 *_strcmp - this function compares twom strings
 *@s1: this is a parameter for the first string
 *@s2: this parameter stands fr the second string
 *
 * Return: this returns 1 on success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
