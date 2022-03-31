#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse with
  * recursion.
  * @s: Pointer to the string.
  */
void _print_rev_recursion(char *s)
{
	char c;

	c = *s;
	if (c == '\0')
		return;

	s++;
	_print_rev_recursion(s);
	s--;

	_putchar(c);
}
