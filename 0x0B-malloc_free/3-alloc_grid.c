#include "main.h"
#include <stdio.h>

/**
 *alloc_grid - this allocates and returns the pointer to array
 *@width: this is the width of the 2D array
 *@height: is the height of the array
 *
 *Return: returns values according to  demand
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		dim[h_index] = malloc(sizeof(int) * width);

		if (dim[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(dim[h_index]);

			free(dim);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			twoD[h_index][w_index] = 0;
	}

	return (dim);
}
