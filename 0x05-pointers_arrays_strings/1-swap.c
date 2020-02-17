#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: int first
 * @b: int second
 * Return: 0 always
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *b;
	*b = *a;
	*a = s;

}
