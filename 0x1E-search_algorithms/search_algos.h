#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

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
#endif /*SEARCH_ALGOS_H*/

