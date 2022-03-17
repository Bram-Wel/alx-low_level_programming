#include "main.h"

/**
 * print_most_numbers - Print no.s.
 *
 * Description: Print no.s 0-9 leaving out 2 & 4..
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
			i++;

		_putchar(i);
		i++;
	}
	_putchar(10);
}
