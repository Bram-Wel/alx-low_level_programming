#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Starting point of the program.
  * @argc: Argument count.
  * @argv: Argument Vector.
  *
  * Return: 0 on success.
  */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *c = *(argv + 2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(c) == NULL || *(c + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' && atoi(*(argv + 3)) == 0) ||
			(*c == '%' && atoi(*(argv + 3)) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 3));

	result = get_op_func(c)(num1, num2);

	printf("%d\n", result);

	return (0);
}
