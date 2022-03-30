#include "main.h"

/**
  * _memcpy - This function copies bytes from one memory
  * to another.
  * @dest: Pointer to the destination memory area.
  * @src: Pointer to the source memory area.
  * @n: Number of bytes that are copied.
  *
  * Return: A pointer to the destination memory area.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
