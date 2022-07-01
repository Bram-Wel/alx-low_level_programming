#include "lists.h"

/**
  * large_palindrome - Finds the largest palindrome.
  * @n: Number of digits in the operands.
  *
  * Description: This fxn obtains the largest palindrome that is
  * the product of 2 n-digit numbers.
  * Compile with; gcc -Wall -pedantic -Werror -Wextra -std=gnu89
  * file.c file_main.c -o file.x -lm.
  * Return: The largets palindrome possible.
  */
int large_palindrome(int n)
{
	int lower_l = (int)pow(10, n - 1), upper_l = (int)pow(10, n) - 1;
	int product_max = 0, i, j, num, rev;

	for (i = upper_l; i >= lower_l; i--)
	{
		for (j = i; j >= lower_l; j--)
		{
			if ((i * j) < product_max)
				break;

			rev = 0;
			for (num = i * j; num != 0; num /= 10)
				rev = rev * 10 + num % 10;

			if ((i * j) == rev && (i * j) > product_max)
				product_max = i * j;
		}
	}

	return (product_max);
}
