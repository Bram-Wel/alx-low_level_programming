#include "main.h"

/**
  * puts2 - Print string to stdout
  * @str: Pointer to String parameter to print.
  *
  * Description: Prints every other string character from the 1st.
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
