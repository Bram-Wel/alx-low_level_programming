#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *str = malloc(5 * sizeof(char));
	*(str + 0) = 'B';
	*(str + 1) = 'e';
	*(str + 2) = 's';
	*(str + 3) = 't';
	*(str + 4) = '\0';
	write(0, str, 5);
	free(str);
	return (0);
}
