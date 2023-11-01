#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - copie string
 * @dest: pointeur, ou la copie est faite
 * @src: pointeur constant
 * Return: copie the string pointed
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	/*parcours jusqu'au char nul*/
	while (src[i] != '\0')
	{
	/*marque la fin u string*/
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
