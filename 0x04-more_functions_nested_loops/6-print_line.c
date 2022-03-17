#include "main.h"

/**
 * print_line - Print a line on terminal.
 * @n: Length of line.
 */
void print_line(int n)
{
	int a = 0;

	while (a <= n && a > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
