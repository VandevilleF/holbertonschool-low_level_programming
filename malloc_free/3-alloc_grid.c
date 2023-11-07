#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - alloc memory for 2 dimentional array
 * @width: numbers of columns
 * @height: numbers of rows
 * Return: pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, col;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
			return (NULL);

	for (col = 0; col < width; col++)
		array[row][col] = 0;
	}

	return (array);
}
