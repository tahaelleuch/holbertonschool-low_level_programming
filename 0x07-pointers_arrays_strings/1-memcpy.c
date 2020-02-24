#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: char the destination
 * @src: the source
 * @n: unsigned int number of byte
 * Return: char @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
