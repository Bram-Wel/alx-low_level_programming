#include "main.h"

/**
  * _strlen - Find length of a string.
  * @s: String to evaluate.
  *
  *Return: Length of the string.
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
