#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a node.
  * @head: Pointer to top of the list.
  * @idx: Index / nth node.
  * @n: New node data.
  *
  * Desctiption: New node is added at index position.
  * It becomes the nth node.
  * Return: Pointer to new node.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *node = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == 0)
		return (0);

	if (head == 0)
		return (0);

	while (i < idx)
	{
		node = node->next;

		if (node == 0)
			return (0);
		i++;
	}
	temp->next = node->next;
	node->next = temp;
	temp->n = n;
	node = temp;

	return (node);
}
