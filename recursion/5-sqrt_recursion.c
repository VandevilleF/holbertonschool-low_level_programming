#include "main.h"
#include <stdio.h>
/**
 * _sqrt - calculate the natual square root
 * @i: variable
 * @n: square root
 * Return: natural square root
 */

int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion - calculate the natual square root
 * @n: number we need to find the square root
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
