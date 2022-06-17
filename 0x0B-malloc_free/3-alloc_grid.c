<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2dimensionalarray
 * of integers
 *
=======
#include <stdlib.h>

/**
 * alloc_grid - allocates a matrix of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
>>>>>>> 6eec92757acf7eae25c92ef47cb6c0d6ad2d4d1a
