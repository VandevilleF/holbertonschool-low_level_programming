#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: numbers of bytes of string 2
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int i, j = 0;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int total = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	total = lens1 + n + 1;
	buffer = malloc(total);

	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		buffer[i] = s1[i];

	while (i < total - 1)
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';

	return (buffer);
}
