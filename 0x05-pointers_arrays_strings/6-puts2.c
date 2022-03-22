#include "main.h"

/**
  * puts2 - Print string to stdout
  * @str: Pointer to String parameter to print.
  *
  * Description: Prints every other string character from the 1st.
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i += 2;
		str += 2;
	}

	_putchar('\n');
}
