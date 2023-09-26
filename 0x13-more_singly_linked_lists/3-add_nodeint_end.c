#include "lists.h"

/**
 * add_nodeint_end - add list to end of node
 * @head: pointer to head of list
 * @n: data in new node
 *
 * Return: pointer to head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *po;
	listint_t *lastNode = *head;

	po = malloc(sizeof(listint_t));
	if (po == NULL)
		return (0);

	po->n = n;
	po->next = NULL;

	if (*head == NULL)
	{
		*head = po;
		return (*head);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = po;

	return (*head);
}
