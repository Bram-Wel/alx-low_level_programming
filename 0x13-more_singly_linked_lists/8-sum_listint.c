#include "lists.h"

/**
  * sum_listint - Sums up the lists data.
  * @head: Top of the list.
  *
  * Return: Sum of the data in the list.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != 0)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
