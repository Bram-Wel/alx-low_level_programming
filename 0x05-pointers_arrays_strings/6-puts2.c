#include "main.h"

/**
  * puts2 - Print string to stdout
  * @str: Pointer to String parameter to print.
  *
  * Description: Prints every other string character from the 1st.
  */
void puts2(char *str)
{
	int size;
	int i;

	size = 0;
	while (str[size] != '\0')
		size++;

	i = 0;
	while (i  < size)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
