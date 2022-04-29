#include "lists.h"

/**
  * pop_listint - Deletes the head node.
  * @head: Pointer to the head node.
  *
  * Description: This function deletes the head node in a
  * linked list.
  * Return: Data stored in the head node.
  */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n = (*head)->n;

	if (*head == 0 || head == 0)
		return (0);

	*head = (*head)->next;
	free(node);

	return (n);
}
