#include "main.h"
#include <stdlib.h>

/**
 *create-array - is a function to create an array
 *@size: is the size of an array
 *@c: is the array charater string
 *
 *Return: returns a value on execution completion of the code
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(sizeof(c));

	if (arr[i] == 0)
		return (NULL);
	return (arr);
}

