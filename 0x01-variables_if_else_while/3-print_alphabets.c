#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints the alphabet in Lower Case
 * then UPPER CASE using putchar(int c).
 * Return: 0 => Success on execution.
 */
int main(void)
{
	char character = 'a';
	char upper_char = 'A';

	while (character <= 'z')
{
	putchar(character);
	character++;
}
	while (upper_char <= 'Z')
{
	putchar(upper_char);
	upper_char++;
}
	putchar('\n');
	return (0);
}
