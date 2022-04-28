#ifndef LISTS_H

#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
/**
  * struct listint_s - Singly linked list.
  * @n: Integer.
  * @next: points to next node.
  *
  * Description: Singly linked list node structure.
  *
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* #ifndef LISTS_H */
