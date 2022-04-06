#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Copies sring parameter to new memory location.
  * @str: String parameter.
  *
  * Return: Pointer to duplicate string, or NULL otherwise.
  */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int n = sizeof(str);
	char *cpy = malloc(n * sizeof(char));

	if (cpy == NULL)
		return (0);

	if (str == NULL)
		return (0);

	i = 0;
	while (i < n + 1)
	{
		*(cpy + i) = *(str + i);
		i++;
	}

	return (cpy);
}
