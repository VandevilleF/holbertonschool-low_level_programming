#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an insigned int
 * @b: pointer to a string
 * Return: binary number convert to an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numbin = 0;
	int i = 0;

	/*Check if b is NULL*/
	if (b == NULL)
		return (-1);

	/*Check if char in string is 0 or 1*/
	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		numbin = numbin * 2 + (b[i] - '0');
		i++;
	}
	return (numbin);
}
