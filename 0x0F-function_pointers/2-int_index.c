#include "fucntion_pointers.h"

/**
  * int_index - Search for an integer.
  * @array: The integer array.
  * @size: Size of array.
  * @cmp: Pointer to compare function.
  *
  * Description: The array elements are compared against an integer
  * for similarity/ equality.
  * Return: -1 for no matches/ negative size, or index of the 1st match.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
