#include <stdlib.h>
#include <stdio.h>

/**
  * main - Prints sum of positive numbers.
  * @argc: Argument count.
  * @argv: Argumet Vector.
  *
  * Return: 0(success), 1(Error).
  */
int main(int argc, char **argv)
{
	int i;
	unsigned int sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr  = *(argv + i);

			if (atoi(ptr) < 0)
			{
				printf("0\n");
				return (0);
			}
			if (*ptr < 48 || *ptr > 57)
			{
				printf("Error\n");

				return (1);
			}

			sum += atoi(ptr);

			ptr++;
		}

		printf("%d\n", sum);

	}

	return (0);
}
