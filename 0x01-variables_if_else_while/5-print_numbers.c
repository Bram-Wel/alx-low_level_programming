#include <stdio.h>

/**
 * main - Starting point.
 *
 * Description: Prints the decimal numbers form
 * 0-9.
 * Return: 0 => Success on execution.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
{
	printf("%d", num);
	num++;
}
	printf("\n");
	return (0);
}
