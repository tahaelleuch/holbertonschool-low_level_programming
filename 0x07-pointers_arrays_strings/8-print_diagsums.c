#include "holberton.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: 0 Alwyas
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum2 = 0;
	int mid[1000][1000];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			mid[i][j] = *a;
			a++;
		}
	}
	for (i = 0, j = 0; i < size; i++, j++)
		sum = mid[i][j];
	for (i = size, j = size; i > 0; i++, j++)
		sum2 = mid[i][j];
	printf("%d, %d", sum, sum2);
}
