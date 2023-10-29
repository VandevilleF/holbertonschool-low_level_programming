#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * leet - change letters in numbers
 * @str: pointeur
 * Return: change specifique letters to a numbers
 */

char *leet(char *str)
{
	int i = 0;
	/*Parcours le string length*/
	while (str[i] != '\0')
	{
		while (str[i] >= 97 && str[i] <= 122)
			i++;
		while (str[i] >= 65 && str[i] <= 90)
			i++;

		if ((str[i] == 97 && str[i] == 65) ||
		(str[i] == 101 && str[i] == 69) ||
		(str[i] == 111 && str[i] == 79) ||
		(str[i] == 116 && str[i] == 84) ||
		(str[i] == 108 && str[i] == 76) ||
		i == 0)
		i++;
	}
	return (str);
}
