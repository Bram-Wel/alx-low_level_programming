#include "lists.h"

/**
  * print_listint - Prints elements of a listint_t nodes.
  * @h: Pointer to head of list.
  *
  * Return: Node count.
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
