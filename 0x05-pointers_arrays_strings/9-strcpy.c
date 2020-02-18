#include "holberton.h"
/**
 * _strcpy - copies the string
 * @dest: char the destinated
 * @src: char the source
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
