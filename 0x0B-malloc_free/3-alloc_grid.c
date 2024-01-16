#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *  **alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *  @width: integer
 *  @height: integer
 *  Return: eturns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width == NULL)
		width == "";
		return (NULL);
	if (height == NULL)
		height == "";
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);
}
