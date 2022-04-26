#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - This function prints anything.
  * @format: Argument types parsed to the function.
  */
void print_all(const char * const format, ...)
{
	va_list argptr;
	int i, j;
	char *comma;

	fmt fmtarr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	comma = "";
	va_start(argptr, format);
	j = 0;
	while (format != 0 && *(format + j) != '\0')
	{
		i = 0;
		while (i < ((int)sizeof(fmtarr) / (int)sizeof(fmt)))
		{
			if (*(fmtarr + i)->s == (char)*(format + j))
			{
				printf("%s", comma);
				(fmtarr + i)->f(argptr);
				comma = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(argptr);
	printf("\n");
}

/**
  * print_char - Prints  a char.
  * @argptr: Pointer to char argument
  */
void print_char(va_list argptr)
{
	printf("%c", va_arg(argptr, int));
}

/**
  * print_int - Prints an integer value.
  * @argptr: Pointer to integer argument.
  */
void print_int(va_list argptr)
{
	printf("%i", va_arg(argptr, int));
}

/**
  * print_float - Prints a floating point no.
  * @argptr: Pointer to float arg.
  */
void print_float(va_list argptr)
{
	printf("%f", va_arg(argptr, double));
}

/**
  * print_string - Prints a string.
  * @argptr: Pointer to string argument.
  */
void print_string(va_list argptr)
{
	char *ptr = va_arg(argptr, char *);

	if (ptr == NULL)
	{
		printf("%p", ptr);
		return;
	}

	printf("%s", ptr);
}
