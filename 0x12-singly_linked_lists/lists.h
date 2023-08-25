#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct list_s
{
	int n;
	struct list_s *next;
} listin_t;

size_t print_list(const listin_t *h);

#endif

