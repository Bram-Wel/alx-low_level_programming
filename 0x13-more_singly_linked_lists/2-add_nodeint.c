#include "lists.h"

/**
  * add_nodeint - Adds a new node.
  * @head: Pointer to head of the list.
  * @n: Node element.
  *
  * Description: Node is added to the beginning
  * of the list.
  * Return: Pointer to the new head/node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == 0)
		return (0);

	if (head == 0)
		return (0);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
