#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * cap_string - capitalizes all words
 * @str: pointeur
 * Return: capitalizes all words
 */

char *cap_string(char *str)
{
	int i = 0;
	/*Parcours le string length*/
	while (str[i] != '\0')
	{
		while (str[i] >= 97 && str[i] <= 122)
			i++;

		if (str[i - 1] == 32 ||
		str[i - 1] == 9 ||
		str[i - 1] == '\n' ||
		str[i - 1] == 44 ||
		str[i - 1] == 59 ||
		str[i - 1] == 46 ||
		str[i - 1] == 33 ||
		str[i - 1] == 63 ||
		str[i - 1] == 34 ||
		str[i - 1] == 40 ||
		str[i - 1] == 41 ||
		str[i - 1] == 123 ||
		str[i - 1] == 125 ||
		i == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
