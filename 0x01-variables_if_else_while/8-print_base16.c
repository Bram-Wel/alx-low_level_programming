#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints the alphabet in Lower Case
 * using putchar(int c).
 * Return: 0 => Success on execution.
 */
int main(void)
{
	unsigned char character = '0xf';

	while (character <= '0x0')
{
	putchar(character);
	character++;
}
	putchar('\n');
	return (0);
}
