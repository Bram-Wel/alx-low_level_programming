# include "main.h"

/**
 * _abs - Computes absolute value of integers.
 * @absolute: Integer operand/ argument.
 *
 * Return: absolute.
 */
int _abs(int absolute)
{
	if (absolute < 0)
	{
		absolute = (-1) * absolute;
	}
	return (absolute);
}
