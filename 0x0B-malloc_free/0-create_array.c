#include <stdlib.h>
#include "main.h"

/**
  * create_array - Creates & initialises an array of characters.
  * @size: Array size.
  * @c: Initialization character.
  *
  * Return: Pointer to array, NULL if it fails / size = 0.
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(size * sizeof(char) + 1);

	if (array == NULL)
		return (0);

	if (size == 0)
		return (0);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}

	*(array + size) = '\0';

	return (array);
}
