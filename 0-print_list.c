#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type list_b to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->str);
		num++;
		h = h->next;
	}

	return (num);
}
