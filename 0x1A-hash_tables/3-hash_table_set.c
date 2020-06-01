#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to add or update
 * @key: the key to add
 * @value: the value assosiated with the key
 * Return: 1 if success 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *h_table, *new_node;
	char *new_value;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	h_table = ht->array[index];
	while (h_table != NULL)
	{
		if (strcmp(h_table->key, key) == 0)
		{
			new_value = strdup(value);
			free(h_table->value);
			h_table->value = new_value;
			return (1);
		}
		h_table = h_table->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return(0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
