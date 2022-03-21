#include "main.h"

/**
  * _puts - Print string to stdout
  * @str: Pointer to String parameter to print.
  */
void _puts(char *str)
{
	char buffer = *str;
	write(1, buffer, _strlen(buffer));
}
