#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - Converts a binary string to unsigned
  * integer.
  * @b: Pointer to the binary string.
  *
  * Return: Unsigned int | 0.
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int ub = 0, pos = 0;

	if (b == 0)
		return (0);

	while (*(b + i) != 0)
	{
		if ((*(b + i) - 48) > 1 || (*(b + i) - 48) < 0)
			return (ub);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if ((*(b + i) - 48) == 1)
			ub += 1 << pos;
		pos++;
	}
	return (ub);
}
