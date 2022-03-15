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
	int  num = 0;
	char character = 'a';

	while (num<=9)
{
	putchar(num%10 + '0');
	num++;
}
	while (character <= 'f')
{
	putchar(character);
	character++;
}
	putchar('\n');
	return (0);
}
