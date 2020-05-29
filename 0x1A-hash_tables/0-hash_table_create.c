#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creat a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned int i;

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);
	h_t->size = size;
	h_t->array = malloc(size * sizeof(hash_node_t *));
	if (h_t->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_t->array[i] = NULL;
	return (h_t);
}
