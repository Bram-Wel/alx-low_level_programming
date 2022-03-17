#include "main.h"

/**
 * print_line - Print a line on terminal.
 * @n: Length of line.
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
