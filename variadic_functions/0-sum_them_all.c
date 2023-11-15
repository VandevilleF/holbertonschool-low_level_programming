#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all arguments
 * @n: last fixe argument
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;/*create list of arguments*/
	unsigned int i;
	int sum = 0;

	va_start(arg, n);/*initialise list at last fixe argument*/

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);/*add value of arg at the sum*/
	va_end(arg);

	return (sum);
}
