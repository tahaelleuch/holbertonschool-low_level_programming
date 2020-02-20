#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array type int to reverse
 * @n: int the number of elements
 * Return: reversed array @a
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;
	int y;

	n = n - 1;
	while (i < n)
	{
		x = a[i];
		y = a[n];
		a[n] = x;
		a[i] = y;
		i++;
		n--;
	}
}
