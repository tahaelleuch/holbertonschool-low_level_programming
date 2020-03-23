#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: the first node
*/
void free_listint2(listint_t **head)
{
	int i;
	listint_t *mid;

	for (i = 0; head; i++)
	{
		mid = *head;
		*head = (*head)->next;
		free(mid);
	}
}
