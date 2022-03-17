#include "main.h"

/**
 * _isalpha - Check for digits.
 * @c: Character operand.
 *
 * Return: 1 for digits & 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
