#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: number
 * @b: number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract a to b
 * @a: number
 * @b: number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multipli a and b
 * @a: number
 * @b: number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divise a to b
 * @a: number
 * @b: number
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	if (b != 0)
	return (a / b);
	else
		printf("Error\n");
	exit(100);
}
/**
 * op_mod - calcul remaind of division
 * @a: number
 * @b: number
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b != 0)
	return (a % b);
	else
		printf("Error\n");
	exit(100);
}
