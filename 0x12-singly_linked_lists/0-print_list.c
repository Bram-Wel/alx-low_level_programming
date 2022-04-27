#include "lists.h"
#include <stdio.h>

/**
  * print_list - Prints elements of a list_t list.
  * @h: Pointer to header node.
  *
  * Return: Number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h->next != 0)
	{
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %p\n", 0, h->str);

		nodes++;
		h = h->next;
	}

	if (h->str != 0)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[%d] %p\n", 0, h->str);

	nodes++;
	h = h->next;

	return (nodes);
}
