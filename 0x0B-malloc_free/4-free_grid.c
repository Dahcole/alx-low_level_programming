#include "main.h"
#include <stdlib.h>

/**
 * free_grid - removing memory allocation
 * @grid: the multidimensional array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
