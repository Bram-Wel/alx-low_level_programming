#include "main.h"

/**
  * _strcat - Concatenates 2 strings.
  * @dest: Pointer to appended String.
  * @src: Pointer to appending string.
  *
  * Description: This function appends the src string to the dest
  * string, overwriting the terminating null byte (\0) at the end of dest,
  * and then adds a terminating null byte.
  * Return: Pointer to Concatenated string => dest.
  */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
