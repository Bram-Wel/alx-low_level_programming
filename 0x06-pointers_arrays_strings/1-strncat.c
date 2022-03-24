#include "main.h"

/**
  * _strncat - Concatenates 2 strings.
  * @dest: Pointer to appended String.
  * @src: Pointer to appending string.
  * @n: Max no. of bytes appended from c.
  *
  * Description: This function appends the src string to the dest
  * string, using at most n bytes from src. And src doesn't need to be
  * null-terminated if containing n + bytes.
  * Return: Pointer to Concatenated string => dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char c;
	char *p = dest;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	if (i < n)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';
	}
	else
	{
		c = *(src + (n - 1));
		while (*src != c)
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = c;
	}

	/*printf("%s\n", dest - i);*/

	return (p);
}
