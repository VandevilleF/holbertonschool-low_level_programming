#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the first element
 * @array: array
 * @size: is number of element of the array
 * @cmp: pointer to the function
 * Return: searvhes for an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*Check if param is valide*/
	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)/*use to find element diff of 0*/
			return (i);
	}
	return (-1);
}
