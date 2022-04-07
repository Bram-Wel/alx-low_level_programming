#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
  * str_concat - Concatenates 2 strings.
  * @s1: Appended string.
  * @s2: Appending string.
  *
  * Return: Pointer to concatenated string, NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int n;
	unsigned int i;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	n = strlen(s1) + strlen(s2) + 1;
	array = malloc(n * sizeof(char));

	if (array == NULL)
		return (0);

	for (i = 0; i < (unsigned int)strlen(s1); i++)
		*(array + i) = *(s1 + i);

/*	printf("i: %d\nn: %d\n", i, n);*/

	for (; i < n; i++)
	{
		*(array + i) = *s2;
		s2++;
	}

	*(array + n) = '\0';

	return (array);
}
