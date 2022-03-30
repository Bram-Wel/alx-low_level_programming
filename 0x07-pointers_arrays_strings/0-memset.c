#include "main.h"

/**
  * _memset - Fills the first n bytes of a memory area
  * that is pointed to.
  * @s: Pointer to a memory area.
  * @b: Byte used to fill the memory area.
  * @n: Number of bytes that are filled, starting from pointed
  * memory location.
  *
  * Return: A pointer to the memory area s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
