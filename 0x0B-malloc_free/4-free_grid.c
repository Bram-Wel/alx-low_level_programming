#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees 2-D grid previously allocated to memory.
  * @grid: Pointer to 2-D array.
  * @height: Rows of grid.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));

	free(grid);
}
