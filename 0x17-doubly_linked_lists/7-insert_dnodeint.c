#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given index
 * @h: header of the linked list
 * @idx: the index where to add
 * @n: the value of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *new;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	new = *h;
	while (idx != 1)
	{
		new = new->next;
		idx--;
	}
	if (new == NULL)
		return (NULL);
	node->prev = new;
	node->next = new->next;
	new->next = node;
	return (node);
}
