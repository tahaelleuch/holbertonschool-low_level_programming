#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: char destination
 * @src: char source
 * @n: int number of bytes from src
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 1;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (n > k)
		n = k;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
