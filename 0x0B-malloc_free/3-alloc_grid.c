#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - Creates 2-D array of integers.
  * @width: Columns of array.
  * @height: Rows of array.
  *
  * Return: Pointer to 2-D array, 0 on failure / invalid parameters.
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (0);

	array = malloc(height * sizeof(int *));
	if (array == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		*(array + i) = malloc(width * sizeof(int));
		if (*(array + i) == 0)
		{
			for (i = 0; i < height; i++)
				free(*(array + i));
			free(array);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(array + i) + j) = 0;
	}

	return (array);
}
