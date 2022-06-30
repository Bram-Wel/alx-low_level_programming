#include "lists.h"
#include <stdio.h>

/**
  * add_dnodeint_end - Adds a node at the end of a list.
  * @head: Pointer to the head of the list.
  * @n: Data to be stored at the new node.
  *
  * Return: Address of new node OR NULL upon failure.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (0);

	node->n = n;
	if (!*head)
	{
		*head = node;
	}
	else
	{
		for (ptr = *head; ptr && ptr->next; ptr = ptr->next)
			;
		node->prev = ptr;
		ptr->next = node;
		node->next = NULL;
	}

	return (*head);
}
