#include "main.h"

/**
  * print_rev - Print string in reverse.
  * @s: String parameter pointer.
  */
void print_rev(char *s)
{
	int i;
	char buffer;

	buffer = *s;
	i = _strlen(buffer);
	while (*s != '\0')
	{
		_putchar(*s);
		i--;
		s--;
	}

	_putchar('\n');
}
