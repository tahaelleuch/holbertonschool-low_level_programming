#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct list_t - singly linked list
 * @str: string
 * @len: length of the string
 * @next: adresse of the next node
*/
typedef struct list_t
{
	char *str;
	unsigned long len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
