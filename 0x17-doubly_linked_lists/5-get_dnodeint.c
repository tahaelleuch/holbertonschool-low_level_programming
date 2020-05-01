#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at index
 * @head: header of the linked list
 * @index: the index of the node to get
 * Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (index != 0)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
