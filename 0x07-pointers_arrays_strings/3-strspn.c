#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char s to test
 * @accept: char to see
 * Return: int number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
