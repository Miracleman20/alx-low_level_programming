#include "main.h"
#include <stdlib.h>

/**
 *free_grid - helps free the grid from array numbers
 *@grid: represents grid to be freed
 *@height: represents the height of the array
 *
 * Return: retuns nothing
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
