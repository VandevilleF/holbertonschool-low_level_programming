#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to be converted
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = ~(m << index);

	*n &= m;

	return (1);
}
