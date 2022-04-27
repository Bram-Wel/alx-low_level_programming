#include "lists.h"
#include <stdio.h>

/**
  * add_node - Adds a node to the begining of a list.
  * @head: Pointer to 1st node.
  * @str: String element of node.
  *
  * Return: Pointer to the new node/head.
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;

	list_t *temp = malloc(sizeof(list_t));

	if (temp == 0)
		return (0);

	if (head == 0 && str == 0)
		return (0);

	temp->str = strdup(str);
	for (len = 0; *(str + len) != '\0'; len++)
		;
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
