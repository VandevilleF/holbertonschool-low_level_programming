#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of number
 * @n: pointeur
 * Return: give number of factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
