#include "3-calc.h"

/**
  * op_add - Sums up two integers.
  * @a: 1st integer.
  * @b: 2nd integer.
  *
  * Return: Sum of integers.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracts 2 integers.
  * @a: Integer operand.
  * @b: Integer operand.
  *
  * Return: Difference of a and b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies 2 integers.
  * @a:Integer operand.
  * @b: Integer operand.
  *
  * Return: Product of integers.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Divides a by b.
  * @a: Integer operand.
  * @b: Integer operand.
  *
  * Return: Quotient of a by b.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Remainder of quotient of a by b.
  * @a: Integer operand.
  * @b: Integer operand.
  *
  * Return: Modulus of b on a
  */
int op_mod(int a, int b)
{
	return (a % b);
}
