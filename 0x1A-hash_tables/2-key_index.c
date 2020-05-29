#include "hash_tables.h"
/**
 * key_index - function that give you the index of the key
 * @key: the key to search for
 * @size: the size of the array
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
