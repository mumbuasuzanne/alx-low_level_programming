#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node given an index
 * @head: pointer to first node
 * @idx: index of the list where the new node is added
 * @n: value of node to be added
 *
 * Return: the address of the new node(SUCESS)
 * NULL (FAIL)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *k;

	k = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && k != NULL; i++)
		{
			k = k->next;
		}
	}

	if (k == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = k->next;
		k->next = newnode;
	}

	return (newnode);
}
