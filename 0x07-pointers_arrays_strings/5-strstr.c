#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: char to look in
 * @needle: char to look for
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (k = 0; needle[k] != '\0'; k++)
			{
				if (haystack[i + k] == needle[k])
					return (haystack + i);
				else
					break;
			}
		if (haystack[i] == needle[k])
			i++;
		else
			return (haystack + i);
		}
	}
	return (0);
}
