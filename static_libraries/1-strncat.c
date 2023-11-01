#include "main.h"
#include <string.h>
/**
 * _strncat - fusionne une partie demandée de 2 strings
 * @dest: string arrivé
 * @src: string source
 * @n: nombre de caractères a compter
 * Return: fusion des parties demandées de 2 strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_l = 0;
	/*calcule length of dest string, find where start*/
	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}

	/*Add n of src to the end of dest*/
	while (src[i] != '\0' && i < n)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	/*Add NULL term at the end*/
	dest[dest_l + i] = '\0';
	return (dest);
}
