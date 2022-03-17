#include "main.h"

/**
 * print_diagonal - Prints diagonal line.
 * @n: Length of diagonal.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
	{
		for(b = 1; b <= n; b++)
		{
			if (a == b)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
