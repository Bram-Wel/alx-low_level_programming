#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory with malloc.
  * @b: Size of memory.
  *
  * Return: Pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(int));

	if (ptr == 0)
		exit(98);

	return (ptr);
}
