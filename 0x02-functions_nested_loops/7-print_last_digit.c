#include "main.h"

/**
 * print_last_digit - Last digit.
 * @n: Integer parameter.
 *
 * Description: Obtain Last digit of number n.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
