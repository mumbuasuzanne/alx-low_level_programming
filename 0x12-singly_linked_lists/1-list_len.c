#include "lists.h"

/**
 * list_len - return the length of a linked list
 * @h: head of the linked list
 * Return: length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
