#include "main.h"

/**
 * more_numbers - X10 number printer.
 *
 * Description: Prints numbers with
 * int _putchar(int c) 10 times over.
 */
void more_numbers(void)
{
	int a;
	int i = 1;

	while (i <= 10)
	{
		a = 0;

		while (a <= 14)
		{
			if (a > 9)

				_putchar(((a / 10) % 10) + '0');

			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		i++;
	}
}
