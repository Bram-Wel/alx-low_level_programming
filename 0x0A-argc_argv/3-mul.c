#include <stdlib.h>
#include <stdio.h>

/**
  * main - Prints the product of two integers.
  * @argc: Argument Count.
  * @argv: Argument Vector.
  *
  * Return: 0(success) or 1(Error).
  */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 2));

	printf("%d\n", a * b);

	return (0);
}
