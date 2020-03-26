#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: number of bits edited
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b;

	b = n ^ m;
	while (b)
	{
		a = a + (b & 1);
		b = b >> 1;
	}
	return (a);
}
