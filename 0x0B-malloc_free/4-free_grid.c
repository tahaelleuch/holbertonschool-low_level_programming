#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - that frees a 2 dimensional grid
 * @grid: double pointer int grid to free
 * @height: the hight of the grid
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
