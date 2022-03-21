#include "main.h"

/**
  * swap_int - Swap values of 2 integers.
  *@a: Pointer to the 1st integer value.
  *@b: Pointer to the 2nd integer value.
  */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
