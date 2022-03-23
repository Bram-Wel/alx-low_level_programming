#include "main.h"

/**
  * puts_half - Prints half of a string to stdout.
  * @str: Pointer to String operand.
  *
  * Description: This function prints the second half of the string.
  * When number of characters are odd, the last n characters are printed
  * where n = (String_length - 1) / 2.
  */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
	{
		i = (len / 2);
		while (str[i]  != '\0')
		{
			_putchar(str[i]);
			i++;
		}

		_putchar('\n');
	}
	else
	{
		i = (len - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}

		_putchar('\n');
	}
}
