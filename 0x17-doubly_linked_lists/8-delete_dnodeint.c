#include "lists.h"

/**
  * delete_dnodeint_at_index - Deletes a node at a given position.
  * @head: Pointer to the head node.
  * @index: Index at which to delete node.
  *
  * Return: 1 on success OR -1 on failure.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || temp == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i != index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);

	return (1);
}
