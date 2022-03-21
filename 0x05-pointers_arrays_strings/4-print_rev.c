#include "main.h"

/**
  * print_rev - Print string in reverse.
  * @s: String parameter pointer.
  */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
