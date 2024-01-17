#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - search value in a sorted array with Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: nothing
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	right = size - 1;
	left = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		if (value == array[mid])
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}
