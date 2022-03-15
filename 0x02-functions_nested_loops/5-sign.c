#include "main.h"

/**
  * print_sign - Show sign of number.
  * @n: integer operand.
  *
  * Description: Determining the negativity/positivity
  * of a number and printing its sign.
  * Return: 1 if +ve, 0 if zero & -1 if negative..
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
