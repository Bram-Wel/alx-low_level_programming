#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
  * main - Generates Username based key for crackme5.
  * @argc: Argument Count.
  * @argv: Argument Vector.
  *
  * Return: 0 on Success, -1 on failure.
  */
int main(int argc, char **argv)
{
	unsigned int i, j;
	size_t len, sum = 0;
	char *string = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *pass = malloc(sizeof(char) * 7);

	if (!pass)
		return (-1);
	for (i = 0; pass; i++)
		*(pass + i) = ' ';
	*(pass + i) = '\0';
	if (argc != 2)
	{
		dprintf(2, "Usage for your keygen: ./keygen5 username\n");
		return (-1);
	}
	len =strlen(*(argv + 1));
	*(pass + 0) = *(string + ((len ^ 59) & 63));
	for (i = 0; i < len; i++)
		sum += *(*(argv + 1) + i);
	*(pass + 1) = *(string + ((sum ^ 79) & 63));
	for (i = 0, j = 1; i < len; i++)
		j *= *(*(argv + 1) + i);
	*(pass + 2) = *(string + ((j ^ 85) & 63));
	for (j = *(*(argv + 1) + 0), i = 0; i < len; i++)
	{
		if ((char)j <= *(*(argv + 1) + i))
			j = *(*(argv + 1) + i);
	}
	srand(j ^ 14);
	*(pass + 3) = *(string + (rand() & 63));
	for (j = 0, i = 0; i < len; i++)
		j += *(*(argv + 1) + i) * *(*(argv + 1) + i);
	*(pass + 4) = *(string + ((j ^ 239) & 63));
	for (j = 0, i = 0; i < len; i++)
		j = rand();
	*(pass + 5) = *(string + ((j ^ 229) & 63));
	printf("%s\n", pass);
	return (0);
}
