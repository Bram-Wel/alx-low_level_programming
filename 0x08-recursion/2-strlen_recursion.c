#include "main.h"

/**
  * _strlen_recursion - Returns the length of a string.
  * @s: Pointer to the string.
  *
  * Return: Length of the String.
  */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);

	s++;
	len = _strlen_recursion(s) + 1;

	return (len);
}

