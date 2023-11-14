#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: function pointers
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
