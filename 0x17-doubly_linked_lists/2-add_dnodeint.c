#include "lists.h"

/**
  * add_dnodeint - Adds a node at the begining of a list.
  * @head: Pointer to the head of the list.
  * @n: Data to be stored at the new node.
  *
  * Return: Address of new node OR NULL upon failure.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (0);

	node->n = n;
	if (!*head)
	{
		*head = node;
	}
	else
	{
		(*head)->prev = node;
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}

	return (*head);
}
