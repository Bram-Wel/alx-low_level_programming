#include <unistd.h>

/**
  * _putchar - Prints a character.
  * @c: Character to print.
  *
  * Return: 1 on success, -1 otherwise & errno set.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
