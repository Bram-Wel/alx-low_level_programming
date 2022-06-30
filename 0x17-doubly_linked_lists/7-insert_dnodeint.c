#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a node at a given position.
  * @h: Pointer to the head node.
  * @idx: Index at which to insert.
  * @n: Value of data(n) for the node.
  *
  * Return: Address of the new node OR NULL on failure.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = *h, *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (0);
	node->n = n;
	while (ptr)
	{
		if (i == idx)
		{
			ptr->prev->next = node;
			node->next = ptr;
			node->prev = ptr->prev;
			ptr->prev = node;
			break;
		}
		i++;
		ptr = ptr->next;
	}
	if (i > idx)
		return (0);

	return (*h);
}
