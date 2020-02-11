#include "holberton.h"
#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0)
			sum = sum + i;
		else if ((i % 5) == 0)
			sum = sum + i;

	}
	printf("%d\n", sum);
}
