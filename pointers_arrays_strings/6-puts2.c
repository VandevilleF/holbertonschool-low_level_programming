#include "main.h"
#include <string.h>
/**
 * puts2 - affiche tous les 2 char
 * @str: variable
 * Return: string in reverse
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	/*'i'= 0, suit la boucle -> der char et incremente de 2 pour sauter un char*/
		_putchar(str[i]);
	_putchar('\n');
}
