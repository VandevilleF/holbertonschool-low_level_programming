#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exec function given as a param on each elem of an array
 * @array: array
 * @size: is of the array
 * @action: pointers to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	/*loop for find size of array*/
	for (i = 0; i < size; i++)
		action(array[i]);/*use to access all element of array*/
}
