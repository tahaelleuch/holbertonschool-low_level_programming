#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: char the destination
 * @src: the source
 * @i: unsigned int number of byte
 * Return: 0 Always
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
