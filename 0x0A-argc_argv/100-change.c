#include <stdlib.h>
#include <stdio.h>

/**
  * main - Prints minimum number of coins required to make change.
  * @argc: Argument count.
  * @argv: Argumet Vector.
  *
  * Return: 0(success), 1(Error).
  */
int main(int argc, char **argv)
{
	int cent = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(*(argv + 1)) < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		cent = atoi(*(argv + 1));
	}
	if (cent > 0)
	{
		for (; cent >= 25; coins++)
			cent = cent - 25;

		for (; cent >= 10; coins++)
			cent = cent - 10;

		for (; cent >= 5; coins++)
			cent = cent - 5;

		for (; cent >= 2; coins++)
			cent = cent - 2;

		for (; cent >= 1; coins++)
			cent = cent - 1;

	}
	printf("%d\n", coins);
	return (0);
}
