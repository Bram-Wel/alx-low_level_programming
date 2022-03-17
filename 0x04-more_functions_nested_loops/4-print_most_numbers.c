#include "main.h"

/**
 * print_numbers - Print no.s.
 *
 * Description: Print no.s 0-9 leaving out 2 & 4..
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 2 || i == 4)
			i++;

		_putchar(i);
		i++;
	}
	_putchar(10);
}
