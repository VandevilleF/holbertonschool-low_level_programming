#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers list
 * @separator: separator
 * @n: number of numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);/*initialise list at last fixe argument*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));

		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
