#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: header of the linked list
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
