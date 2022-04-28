#include "lists.h"

/**
  * add_nodeint_end - Adds a new node.
  * @head: Pointer to the top of the list.
  * @n: Node element.
  *
  * Desription: Adds node at the end of a list.
  * Return: Pointer to new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;

	if (node == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == 0)
			return (0);
		node->n = n;
		node->next = 0;
		*head = node;
		return (*head);
	}
	else
	{
		while (node->next != 0)
			node = node->next;

		node->next = malloc(sizeof(listint_t));
		if (node->next == 0)
			return (0);
		node->next->n = n;
		node->next->next = 0;
	}

	return (node->next);
}
