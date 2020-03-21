#include "lists.h"
/**
 * list_len - function that get the number of elements in a ll
 * @h: structed list
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
