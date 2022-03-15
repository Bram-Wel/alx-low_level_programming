#include "main.h"

/**
 * print_alphabet - Alphabet printer.
 *
 * Description: Prints the alphabet in Lower Case
 * using int _putchar(int c).
 */
void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
{
	_putchar(character);
	character++;
}
	_putchar('\n');
}
