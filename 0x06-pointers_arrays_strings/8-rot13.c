#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @c: char to encode
 * Return: char encoded
*/
char *rot13(char *c)
{
	int i;
	int j;
	char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; one[j] != '\0'; j++)
		{
			if (c[i] == one[j])
				c[i] = two[j];
		}
	}
	return (c);
}

