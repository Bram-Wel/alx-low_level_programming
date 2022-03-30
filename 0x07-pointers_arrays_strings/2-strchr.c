#include "main.h"

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
			ptr = '\0';
		}

		i++;
	}

	return (ptr);
}
