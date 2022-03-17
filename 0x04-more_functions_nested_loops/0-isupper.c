#include "main.h"

/**
 * _islower - Check for lowercase characters.
 * @c: Character operand.
 *
 * Return: 1 for lowercase & 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
