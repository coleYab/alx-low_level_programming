#include "main.h"

/**
 * alloc_grid - it allocates a grid of matrix
 * @width: is the number of the thing
 * @height: is teh numebr of the row
 * Return: the memory location of the thing
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix = (int **)malloc(height * sizeof(int *));

	if (!matrix || height <= 0 || width <= 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (!matrix[i])
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (0);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}
