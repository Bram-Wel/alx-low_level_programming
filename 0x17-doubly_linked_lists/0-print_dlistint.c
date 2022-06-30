#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - Prints elements of a doubly linked list.
  * @h: - Pointer to the head of the list.
  *
  * Return: Size of the list.
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
