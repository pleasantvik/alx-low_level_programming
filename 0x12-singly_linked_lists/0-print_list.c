#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listin_t to print
 *
 * Return: number of nodes
 */
size_t print_list(const listin_t *h)
{
	size_t nums = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nums++;
		h = h->next;
	}

	return (nums);
}

