#include "main.h"
#include <stdlib.h>

/**
 *_strdup- a function that creates a duplicat string
 *@str: is the string to duplicate
 *
 *Return: most return positive values or NULL
 */

char *_strdup(char *str)
{
	char *dups;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dups = malloc(sizeof(char) * (len + 1));

	if (dups == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dups[i] = str[i];

	dups[len] = '\0';

	return (dups);
}
