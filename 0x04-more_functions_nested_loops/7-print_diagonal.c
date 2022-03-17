#include "main.h"

/**
 * print_diagonal - Prints diagonal line.
 * @n: Length of diagonal.
 */
void print_diagonal(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
