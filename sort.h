#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * enum bool - Enumaration of boolean values.
 *
 * @false: Equals 0
 * @true: Equal 1
 */
typedef enum bool
{
	false = 0, true = 1
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Helper functions for all tasks.*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting Algoriths */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

#endif
