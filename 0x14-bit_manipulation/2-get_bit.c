#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number int
 * @index: the index of bit
 * Return: choosen bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	n = n >> index;
	bit = n & 1;
	if ((bit == 1) || (bit == 0))
		return (bit);
	return (-1);
}
