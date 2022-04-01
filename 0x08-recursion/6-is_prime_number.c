#include "main.h"

int is_prime(unsigned int n, int i);

/**
  * is_prime_number - Checks that an input integer is prime.
  * @n: The input integer.
  *
  * Description: Calls the support function is prime.
  * Return: 1 if prime, 0 if otherwise.
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
  * is_prime - Checks if an integer is prime.
  * @n: The integer argument.
  * @i: Iteration variable.
  *
  * Description: As the variable n is constant, recursively parsing it to
  * function will cause stack overflow, thus requiring a support function
  * taking 2 varibles where one can change.
  * Return: 1 if prime, 0 if not.
  */
int is_prime(unsigned int n, int i)
{
	if (n == 0 || n == 1)
		return (0); /* 1 & 0 are not prime.*/

	if (n == (unsigned int)i)
		return (1); /* n is only divisible by itself as ...*/

	if (n % i == 0)
		return (0); /* ... it is indivisible by any other number less than n.*/

	return (is_prime(n, i + 1)); /* Increment i with every recursive call*/
}
