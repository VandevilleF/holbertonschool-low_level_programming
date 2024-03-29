#include "search_algos.h"

/**
 * linear_search - searches value in an array with Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	/*Check if array is exist*/
	if (array == NULL)
		return (-1);

	/*When i is smaller than size*/
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;

		/*If value of index of the array is egal to the value*/
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
