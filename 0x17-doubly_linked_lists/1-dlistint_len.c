#include "lists.h"
#include <stdio.h>

/**
  * dlistint_len - Counts elements of a doubly linked list.
  * @h: - Pointer to the head of the list.
  *
  * Return: No. of elements in a list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	while (h)
	{
		if (h->n)
			i++;
		h = h->next;
	}

	return (i);
}
