#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints elements of integer array.
  * @a: Pointer to integer array.
  * @n: Number of elements to print.
  *
  * Description: Function prints n number of integers from an array
  * Separated by comma & space in the order of storage using printf.
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
