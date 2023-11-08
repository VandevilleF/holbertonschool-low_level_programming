#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 fllowed by s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i, j;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	buffer = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		buffer[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		buffer[i + j] = s2[j];

	buffer[i + j] = '\0';

	return (buffer);
}
