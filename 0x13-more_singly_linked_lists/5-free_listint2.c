#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: the first node
*/
void free_listint2(listint_t **head)
{
	int i;
	listint_t *mid;

	if (head == NULL)
		return;
	for (i = 0; head; i++)
	{
		mid = (*head)->next;
		free(*head);
		*head = mid;
	}
}
