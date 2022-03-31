#include "main.h"

/**
  * _pow_recursion - Finds the value of an integer x when
  * raised to a power y.
  * @x: Integer value.
  * @y: Power value.
  *
  *Return: -1 if y is negative, & the value of x raised to a power y.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
