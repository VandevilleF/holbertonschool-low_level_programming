#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: separator
 * @n: number of string passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *var;
	va_list arg;

	va_start(arg, n);/*initialise list at last fixe argument*/

	for (i = 0; i < n; i++)
	{
		var = va_arg(arg, char*);
		if (var == NULL)
			printf("(nil)");
		else
			printf("%s", var);
		if (i != n -1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
