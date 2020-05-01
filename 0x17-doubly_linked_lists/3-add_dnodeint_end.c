#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: header of the linked list
 * @n: new value to make a node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	new = *head;
	if (new == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->prev = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = node;
	}
	return (new);
}
