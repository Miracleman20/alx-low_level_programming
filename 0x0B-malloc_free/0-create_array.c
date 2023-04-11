#include "main.h"
#include <stdlib.h>

/**
 *create_array - is a function to create an array
 *@size: is the size of an array
 *@c: is the array charater string
 *
 *Return: returns a value on execution completion of the code
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}
