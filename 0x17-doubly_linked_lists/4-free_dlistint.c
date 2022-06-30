#include "lists.h"

/**
  * free_dlistint - Free's a double linked list.
  * @head: Pointer to the head of the list.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
