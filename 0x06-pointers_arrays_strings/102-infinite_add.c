#include <stdio.h>
/**
 * infinite_add - adds two numbers.
 * @n1: char one
 * @n2: char two
 * @r: char result
 * @size_r: int buffer size
 * Return: char @r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, digit, rest = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= j)
		k = i;
	else
		k = j;
	if (k + 1 >= size_r)
		return (0);
	i--, j--;
	r[k + 1]= '\0';
	k = k - 1;
	while (k > 0)
	{
		digit = (n1[i] - '0') + (n2[j] - '0') + rest;
		rest = digit / 10;
		digit = digit % 10;
		r[k] = (digit + '0');
		i--, j--, k--;
		if (i < 0)
		{
			i = 0;
			n1[0] = '0';
		}
		if (j < 0)
		{
			j = 0;
			n1[0] = '0';
		}
	}
/**	while (k >= 0)
	{
		if (i >= 0)
			r[k] = n1[i] + 1;
		else
			r[k] = n2[j];
		i--, j--, k--;
	}
*/	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
