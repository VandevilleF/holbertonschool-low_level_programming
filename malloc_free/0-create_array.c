#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @c: specific char
 * @size: size of array
 * Return: array of char with specific char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));/*Allocate memory for array*/
	if (size == 0) /*NULL pointer for an empty array*/
		return (NULL);

	if (array == NULL)/*NULL if allocation fails*/
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;/*Fill array with special char*/
	return (array);
}
