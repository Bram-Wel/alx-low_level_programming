#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints the alphabet in Lower Case
 * using putchar(int c) except q & e..
 * Return: 0 => Success on execution.
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if ((character == 'e') || (character == 'q'))
			character++;

		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
