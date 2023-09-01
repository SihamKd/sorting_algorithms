#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include "list.h"

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
#endif /* SORT_H */
