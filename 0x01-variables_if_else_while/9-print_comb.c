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
	char character = '0';

	while (character <= '9')
{
	putchar(character);
	putchar(',');
	putchar(' ');
	character++;
}
	putchar('\n');
	return (0);
}
