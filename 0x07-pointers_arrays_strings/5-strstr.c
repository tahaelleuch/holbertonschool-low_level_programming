#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: char to look in
 * @needle: char to look for
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i, k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while((needle[k] != '\0') && (haystack[i] == needle[0]))
		{
			if (needle[k] == haystack[k + i])
				k++;
			else
				break;
		}
		if (needle[k] == '\0')
			return (haystack + i);
		k = 0;
	}
	return (0);
}
