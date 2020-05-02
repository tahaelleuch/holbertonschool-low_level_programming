#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at specefix index
 * @head: the header of the linked list
 * @index: the index to delet
 * Returns: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;

	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = new->next;
		if (new->next != NULL)
			new->next->prev = NULL;
		free(new);
		return (1);
	}
	while(index  != 0 && new->next != NULL)
	{
		new = new->next;
		index--;
	}
	if (index != 0 || new == NULL)
		return (-1);
	new->prev->next = new->next;
	if(new->next != NULL)
		new->next->prev = new->prev;
	free(new);
	return (1);
}
