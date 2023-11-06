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

	array = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
