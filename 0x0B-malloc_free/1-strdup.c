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
	unsigned int n;
	char *cpy;
	char c;

	if (str == NULL)
		return (0);

	c = *str;

	for (n = 0; *str != '\0'; n++)
		str++;

	cpy = malloc((n + 1) * sizeof(char));

	if (cpy == NULL)
		return (0);

	while (*str != c)
		str--;

	i = 0;
	while (i < n)
	{
		*(cpy + i) = *(str + i);
		i++;
	}


	/*printf("n:%d\nstr:%s\ncpy:%s\ni:%d\n", n, str, cpy, i);*/

	return (cpy);
}
