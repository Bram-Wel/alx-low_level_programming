#include "main.h"

/**
  * _puts - Print string to stdout
  * @str: Pointer to String parameter to print.
  */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
}
