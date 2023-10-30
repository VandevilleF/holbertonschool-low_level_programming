#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - length of a string
 * @s: pointeur
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int lg = 0;

	if (*s == '\0')
		return (lg);
	/*Add 1 to lg and recursion */
	return (_strlen_recursion(s + 1) + 1);
}
