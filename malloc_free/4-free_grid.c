#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimentional grid
 * @height: numbers of row
 * Return: frees a 2 dimentional grid previously create
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)/*Loop each row*/
		free(grid[i]);/*free memory alloc for each row*/
	free(grid);/*free memory for array*/
}
