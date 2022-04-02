#include <stdlib.h>
#include <stdio.h>

/**
  * main - Prints its file.
  * @argc: Argument count.
  * @argv: Pointer to string argument pointers.
  *
  * Return: 0, success.
  */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));

	return (0);
}
