#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an int
 * @b: the binary dunction
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0, mul = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			u = u + mul;
		mul = mul * 2;
		i--;
	}
	return (u);
}
