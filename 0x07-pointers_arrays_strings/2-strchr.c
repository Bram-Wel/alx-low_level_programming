#include "main.h"
#include <stddef.h>

/**
  * _strchr - This function locates a character in a
  * string.
  * @s: Pointer to the string.
  * @c: Character to be located in the string.
  *
  * Return: Returns a pointer to the first occerence of the
  * character.
  */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	if (c == '\0')
	{
		while (*s)
		{
			s++;
		}

		ptr = s;
	}

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			ptr = s + i;
			break;
		}
		else
		{
			ptr = NULL;
		}

		i++;
	}

	return (ptr);
}
