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
	int digit = 0;

	while (digit <= 9)
{
	putchar(digit % 10 + '0');
	if (digit <= 8)
{
	putchar(',');
	putchar(' ');
}
	digit++;
}
	putchar('\n');
	return (0);
}
