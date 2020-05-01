#include "lists.h"
/**
 * sum_dlistint - sum all data
 * @head: the header of linked list
 * Return: the sum or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
