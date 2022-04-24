#include "function_pointers.h"
/*#include "_putchar.c"*/

/**
  * print_name - This function will print a name.
  * @name: Name operand / argument.
  * @f: pointer to function.
  *
  * Description: Call to the function f prints the name argument.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	f(name);
}
