#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints digits 0-9
 * using putchar(int c).
 * Return: 0 => Success on execution.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
{
	putchar(num%10 + '0');
	num++;
}
	putchar('\n');
	return (0);
}
