#include "main.h"

/**
 * main - Starting point.
 *
 * Description: Prints a string with putchar function.
 * Return: 0 => Success.
 */
int main(void)
{
	char str[15];
	int j;

	str[0] = '_';
	str[1] = 'p';
	str[2] = 'u';
	str[3] = 't';
	str[4] = 'c';
	str[5] = 'h';
	str[6] = 'a';
	str[7] = 'r';
	str[8] = '\n';
	str[9] = '\0';
	j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	return (0);
}
