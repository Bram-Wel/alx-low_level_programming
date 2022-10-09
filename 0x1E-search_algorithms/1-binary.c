#include "search_algos.h"

/**
 * binary_search - Seeks a value from a sorted integer
 * array
 *
 * @array: Pointer to first element in Sorted integer array
 * / array
 * @size: Size of the sorted array
 * @value: The value/ data that is sort
 * Return: Index of data sort in the array or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1, i = 0;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			print(array, left, right);
			i = (left + right) / 2;
			if (array[i] < value)
				left = i + 1;
			else if (array[i] > value)
				right = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}

/**
 * print - Print array
 * @array: Array
 * @right: min
 * @left: max
 */
void print(int *array, int left, int right)
{
	int i;
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
