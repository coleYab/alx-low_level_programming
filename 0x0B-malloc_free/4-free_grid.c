#include "main.h"

/**
 * free_grid - frees the previously allocated memory
 * @grid: the alocated matrix
 * @height: is the height of the matrix
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
