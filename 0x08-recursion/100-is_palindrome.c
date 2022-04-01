#include "main.h"

char *revstr(char *s);

/**
  * is_palindrome - Checks that a string is a palindrome.
  * @s: Pointer to String.
  *
  * Return: 1 if palindrome, 0 otherwise.
  */
int is_palindrome(char *s)
{
	char *ptr;
	int i = 0;
	int rtn;

	ptr = revstr(s);

	if (*s == '\0')
		return (1);

	if (*(s + i) == *(ptr + i))
		return (1);

	if (*(s + i) != *(ptr + i))
		return (0);

	rtn = is_palindrome(s + i);
	i++;

	return (rtn);
}

/**
  * revstr - Reverses a string.
  * @s: Pointer to string.
  *
  * Description: This function reverses the pointer to the last character
  * of the string to faccilitate comparison using palindrome function.
  * Return: Pointer to string.
  */
char *revstr(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	revstr(s);
	s--;

	return (s);
}
