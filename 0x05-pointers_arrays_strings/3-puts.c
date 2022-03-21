#include "main.h"

/**
  * _puts - Print string to stdout
  * @str: Pointer to String parameter to print.
  */
void _puts(char *str)
{
	write(1, *str, _strlen(*str));
}
