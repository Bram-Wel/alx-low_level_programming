#include <stdio.h>

/**
  * main - Prints number of parsed arguments.
  * @argc: Argument count.
  * @argv: Argument vector.
  *
  * Return: 0, success.
  */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
