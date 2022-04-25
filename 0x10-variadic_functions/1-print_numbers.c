#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - This function prints numbers.
  * @separator: String seperating printed no.s.
  * @n: No. of integers passed to the function.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argptr;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(argptr, n);
	i = 0;
	while (i < (n - 1))
	{
		printf("%d%s", va_arg(argptr, int), separator);
		i++;
	}

	printf("%d\n", va_arg(argptr, int));

	va_end(argptr);
}
