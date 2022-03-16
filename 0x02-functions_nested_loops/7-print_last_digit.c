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
	int  last_digit;

	if (n >= 0)
		last_digit = n % 10;
	else
		last_digit = (n % 10) * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
