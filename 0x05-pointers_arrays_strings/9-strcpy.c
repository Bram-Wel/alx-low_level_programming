#include "main.h"

/**
  * _strcpy - Copy src string to dest string.
  * @dest: Pointer to destination string.
  * @src: Pointer to Source string.
  *
  * Return: Char * pointer to dest string.
  */
char *_strcpy(char *dest, char *src)
{
	char *buff1;
	char *buff2;

	buff1 = src;
	buff2 = dest;

	while (*buff1 != '\0')
	{
		*buff2 = *buff1;
		buff1++;
		buff2++;
	}

	*buff2 = '\0';

	return (dest);
}
