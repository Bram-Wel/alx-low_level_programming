#include "main.h"

/**
  * _puts_recursion - Prints a string using recursion.
  * @s: Pointer to the string.
  */
void _puts_recursion(char *s)
{
	char c;

	c = *s;
	if (c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(c);
	_puts_recursion(s + 1);
}
