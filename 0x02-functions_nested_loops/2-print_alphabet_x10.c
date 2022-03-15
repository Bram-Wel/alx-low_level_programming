#include "main.h"

/**
 * print_alphabet_x10 - X10 Alphabet printer.
 *
 * Description: Prints the alphabet in Lower Case
 * using int _putchar(int c) 10 times over.
 */
void print_alphabet_x10(void)
{
	char character;
	int i = 1;

	while (i <= 10)
	{
		character = 'a';

	while (character <= 'z')
	{
	_putchar(character);
	character++;
	}
	_putchar('\n');
	i++;
	}
}
