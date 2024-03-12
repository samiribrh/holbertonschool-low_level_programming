#include <stdio.h>
#include "main.h"

/**
*free_grid - Frees a 2 dimensional grid.
*@grid: Pointer for two dimensional grid
*@height: Height of the grid
*
*Return: void.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = height; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}
