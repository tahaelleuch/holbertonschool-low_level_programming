#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int size
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
