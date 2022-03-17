#include "main.h"

/**
 * print_numbers - Print no.s from 0-9.
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
