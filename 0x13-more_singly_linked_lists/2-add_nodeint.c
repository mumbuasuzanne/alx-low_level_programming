#include "lists.h"

/**
 * add_nodeint - add new node to head of list
 * @head: pointer to head of list.
 * @n: data in node.
 *
 * Return: pointer to new head of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *po;

	po = malloc(sizeof(listint_t));
	if (po == NULL)
		return (0);

	po->n = n;
	po->next = *head;
	*head = po;

	return (po);
}
