#include "lists.h"

/**
 * print_listint- prints all the elements in the linked list
 * @h : pointer to first node in the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nonode = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nonode++;
		h = h->next;
	}
	return (nonode);
}
