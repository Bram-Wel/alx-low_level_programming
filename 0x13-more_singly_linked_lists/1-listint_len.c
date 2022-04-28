#include "lists.h"

/**
  * listint_len - Counts elements of listint_t nodes.
  * @h: Pointer to head of list.
  *
  * Return: Node count.
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
