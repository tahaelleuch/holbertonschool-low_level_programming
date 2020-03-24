#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of ll
 * @idx: index of the new node
 * @n: int data to add
 * Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *mid, *new;

	mid = *head;
        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			mid = mid->next;
			if (mid == NULL)
				return (NULL);
		}
	}
	else
	{
		new->next = mid;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->next = mid->next;
	mid->next = new;
	return (new);
}
