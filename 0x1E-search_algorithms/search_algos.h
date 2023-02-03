#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int *array, int left, int right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
void print_array(int *array, int left, int right);
int binary_search_new(int *array, int left, int right, int value);
int exponential_search(int *array, size_t size, int value);

/**
 * struct listint_s - singly
 *
 * @n: Integer
 * @index: Index of 
 * @next: Pointer 
 *
 * Description: singly  
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
listint_t *jump_it(listint_t *start, int end);
listint_t *jump_list(listint_t *list, size_t size, int value);
#endif /*SEARCH_ALGOS_H*/

