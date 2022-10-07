#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 * integers
 *
 * @array: Pointer to array/first array element
 * @size: No. of array elements
 * @value: Value/data to search for in array
 * Return: 1st index whose data matches value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
