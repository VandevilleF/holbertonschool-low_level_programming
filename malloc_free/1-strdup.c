#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy string
 * @str: string
 * Return: copy with success
 */
char *_strdup(char *str)
{
	char *buffer;
	unsigned int i;

	buffer = malloc((strlen(str) + 1) * sizeof(str));
	if (str == NULL)
		return (NULL);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		buffer[i] = str[i];
	buffer[i] = '\0';
	free(buffer);
	return (buffer);
}
