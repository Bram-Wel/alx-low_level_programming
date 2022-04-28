#include "lists.h"

/**
  * add_node_end - Adds a node at the end of a list.
  * @head: Pointer to the 1st node.
  * @str: String element of the node.
  *
  * Return: Address of the new node. [NULL] if it fails.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;

	list_t *node = *head;

	if (head == 0 && str == 0)
		return (0);

	for (i = 0; *(str + i) != 0; i++)
		;

	if (node == 0)
	{
		node = malloc(sizeof(list_t));
		if (node == 0)
			return (0);
		node->str = strdup(str);
		node->len = i;
		node->next = 0;
		*head = node;
		return (*head);
	}
	else
	{
		while (node->next != 0)
			node = node->next;
		node->next = malloc(sizeof(list_t));
		node->next->str = strdup(str);
		node->next->len = i;
		node->next->next = 0;
	}

	return (node->next);
}
