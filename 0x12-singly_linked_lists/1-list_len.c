#include "lists.h"
#include "stdio.h"

/**
  * list_len - Finds element count in linked list.
  * @h: Pointer to linked list header.
  *
  * Return: Number of elements.
  */
size_t list_len(const list_t *h)
{
	size_t nodes = 0; /*Each node has 1 element, so...*/

	if (!h)
		return (nodes);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
