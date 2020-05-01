#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a ll
 * @head: headher of the linked list
 * @n: the new value to add
 * Return: the adresse of the new node or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	new = *head;
	node->n = n;
	node->next = new;
	node->prev = NULL;
	if (node->next != NULL)
		new->prev = node;
	*head = node;
	return (node);
}
