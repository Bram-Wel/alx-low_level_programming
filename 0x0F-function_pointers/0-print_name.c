#include "function_pointers.h"
#include "_putchar.c"

/**
  * print_name - This function will print a name.
  * @name: Name operand / argument.
  * @f: pointer to function.
  *
  * Description: Call to the function f prints the name argument.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
  * f - Prints a name that is passed to it.
  * @name: Name operand.
  */
void f(char *name)
{
	int i = 0;

	while (*(name + i) != 0)
	{
		_putchar(*(name + i));
		i++;
	}
	_putchar('\0');
}
