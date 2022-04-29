#include "lists.h"

/**
  * free_listint2 - Free list from memory.
  * @head: Pointer to head of the list.
  */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == 0)
		return;

	while (*head != 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
