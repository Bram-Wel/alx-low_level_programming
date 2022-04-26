#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - Prints Strings.
  * @separator: String printed between strings.
  * @n: No. of Strings.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argptr, argcpy;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(argptr, n);
#ifdef _va_copy
	_vacopy(argcpy, argptr);
#endif
	va_start(argcpy, n);
	i = 0;
	while (i < (n - 1))
	{
		if (separator == NULL)
		{
			if (va_arg(argptr, char *) == NULL)
				printf("%p", va_arg(argcpy, char *));
			else
				printf("%s", va_arg(argcpy, char *));
		}
		else
		{
			if (va_arg(argptr, char *) == NULL)
				printf("%p%s", va_arg(argcpy, char *), separator);
			else
				printf("%s%s", va_arg(argcpy, char *), separator);
		}
		i++;
	}

	if  (va_arg(argptr, char *) == NULL)
		printf("%p\n", va_arg(argcpy, char *));
	else
		printf("%s\n", va_arg(argcpy, char *));

	va_end(argcpy);
	va_end(argptr);
}
