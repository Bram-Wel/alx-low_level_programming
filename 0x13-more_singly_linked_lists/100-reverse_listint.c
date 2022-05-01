#include "lists.h"

/**
  * reverse_listint - Reverses a linked list.
  * @head: Pointer to the 1st node on the list.
  *
  * Return: Pointer to the head of reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = 0, *temp;

	if (head == 0 || *head == 0)
		return (0);

	while (*head != 0)
	{
		temp = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = temp;
	}
	*head = node;

	return (*head);
}
