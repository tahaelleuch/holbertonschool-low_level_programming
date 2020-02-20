#include <stdio.h>
/**
 * infinite_add - adds two numbers.
 * @n1: char one
 * @n2: char two
 * @r: char result
 * @size_r: int buffer size
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, digit, rest = 0, l;

	while (n1[i] != '\0')
		i++;
	while (n1[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	for (k = 0; k < size_r - 1; i--, j--, k++)
	{
		digit = rest;
		if (i >= 0)
			digit = digit + (n1[i] - '0');
		if (j >= 0)
			digit = digit + (n2[j] - '0');
		if (digit > 9)
		{
			rest = digit / 10;
			digit = digit % 10;
		}
		else
			rest = 0;
		if (i < 0 && j < 0 && digit == 0)
			break;
		r[k] = digit + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || rest)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		rest = r[k];
		r[k] = r[l];
		r[l] = rest;
	}
	return (r);

}
