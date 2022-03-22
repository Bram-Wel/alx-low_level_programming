#include "main.h"

/**
  * rev_string - Reverse a string.
  *@s: Pointer to String.
  */
void rev_string(char *s)
{
	int len;
	int i;
	char *start;
	char *end;
	char temp;
	int i = 0;
	
	while ( *(s + i) != '\0')
		i++;

	len = i;
	start = st;
	end = st;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len/2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
