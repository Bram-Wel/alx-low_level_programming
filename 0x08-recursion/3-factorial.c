#include "main.h"

/**
  * factorial - Finds the factorial of a number.
  * @n: The integer argument.
  *
  * Return: -1 {Error} if n is negative, & the factorial of
  * integer n.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
