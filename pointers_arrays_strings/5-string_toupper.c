#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - change lowerC in upperC
 * @str: pointeur
 * Return: change lowerC in upperC
 */

char *string_toupper(char *str)
{
	int i;
	/*Parcours le string length*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		/*upper et lower on 32 de diff au tableau ascii*/
			str[i] = str[i] - 32;
	}
	return (str);
}
