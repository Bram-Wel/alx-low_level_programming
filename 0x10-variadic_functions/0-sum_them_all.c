#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums its parameters.
  * @n: Number of expected parameters.
  *
  * Return: Sum of parameters, 0 if (n == 0).
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list argptr;

	if (n == 0)
		return (0);

	va_start(argptr, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(argptr, int);
		i++;
	}

	va_end(argptr);

	return (sum);
}
