#include "function_pointers.h"
/*#include <stddef.h>*/

/**
  * array_iterator - Iterates through an integer array.
  * @array: The iterated array.
  * @size: Size of the array.
  * @action: Pointer to function called in each itearation.
  *
  * Description: This function calls a function action
  * as it iterates through an integer array operand of size @size.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (unsigned int)size; i++)
		action(*(array + i));
}
