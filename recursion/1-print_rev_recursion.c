#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Print rev string
 * @s: pointeur
 * Return: string in rev
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')/*if is the ch NULL, it's end of the string*/
	{
		/*call the recursion with the next ch*/
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
