#include "lists.h"

/**
  * sum_dlistint - Sums up the data(n) of a linked list.
  * @head: Head of the linked list.
  *
  * Return: Sum of the data(n).
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
