#include "lists.h"

/**
  * get_dnodeint_at_index - Finds node at index.
  * @index: Index of node, starting 0
  * @head: Head of the list..
  *
  * Return: Node at index OR NULL if node doesn't exist.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index && head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (0);
}
