#include "lists.h"

/**
 * sum_listint - find sum of elements in linkedlist
 * @head:pointer to first node
 *
 * Return: sum of elements in linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
