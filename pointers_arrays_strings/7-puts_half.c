#include "main.h"
#include <string.h>
/**
 * puts_half - put half of string
 * @str: variable
 * Return: half of string
 */

void puts_half(char *str)
{
	int i = 0;
	int l = strlen(str);
	/* if str has an even length, start from the middle*/
	if (l % 2 == 0)
		i = l / 2;
	/* if str has an odd length, start from middle +1*/
	else
		i = (l + 1) / 2;
	for (;str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
