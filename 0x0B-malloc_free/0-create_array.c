#include "holberton.h"
#include  <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with char
 * @size: unsigned int
 * @c: char
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
