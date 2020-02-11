#include "holberton.h"
#include <stdio.h>
/**
 * main - natural numbers multiples of 3 or 5 to 1024
 *
 * Return: always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum = sum + i;
		else if ((i % 5) == 0)
			sum = sum + i;

	}
	printf("%d\n", sum);
}
