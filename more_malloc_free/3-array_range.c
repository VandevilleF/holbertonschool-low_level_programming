#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - creates an array
 * @min: value min
 * @max: value max
 * Return: that creates an array of integers
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	array = malloc((max - min + 1) * 4);
		if (array == NULL)
			return (NULL);
	if (min > max)
		return (NULL);
	
	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
