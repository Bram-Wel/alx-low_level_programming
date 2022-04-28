#include "lists.h"

/**
  * free_list - Frees a list_t linked list.
  * @head: Pointer to the start of the list.
  */
void free_list(list_t *head)
{
	list_t *node;

	while (head != 0)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
