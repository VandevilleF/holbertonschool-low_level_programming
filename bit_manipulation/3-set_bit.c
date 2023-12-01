#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be converted
 * @index: number need to convert
 * Return: the value of the bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = m << index;

	*n = *n | m;
	return (1);
}
