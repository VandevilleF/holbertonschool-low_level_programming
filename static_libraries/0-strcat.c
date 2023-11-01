#include "main.h"
#include <string.h>
/**
 * _strcat - fusionne 2 strings
 * @dest: string arrivé
 * @src: string source
 * Return: fusion des 2 strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_l = 0;
	/*calcule length of dest string, find where start*/
	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}

	/*Add src to the end of dest*/
	while (src[i] != '\0')
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	/*Add NULL term at the end*/
	dest[dest_l + i] = '\0';
	return (dest);
}
