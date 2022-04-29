#include "lists.h"

/**
  * get_nodeint_at_index - Find a node.
  * @head: Pointer to the 1st node.
  * @index: The index / rank / number / position of the node.
  *
  * Description: This function onbtains the nth node.
  * Return: Pointer to the nth node in the list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (i < index)
	{
		node = node->next;

		if (node == 0)
			break;

		i++;
	}
	return (node);
}
