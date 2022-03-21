#include "main.h"

/**
  * print_rev - Print string in reverse.
  * @s: String parameter pointer.
  */
void print_rev(char *s)
{
	int i;

	i = 1000;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
