#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints the alphabet in Lower Case
 * using putchar(int c) in reverse.
 * Return: 0 => Success on execution.
 */
int main(void)
{
	char character = 'z';

	while (character >= 'a')
{
	putchar(character);
	character--;
}
	putchar('\n');
	return (0);
}
