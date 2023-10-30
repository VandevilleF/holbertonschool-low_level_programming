#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - x rased to the power of y
 * @x: value
 * @y: value of power
 * Return: value total
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	/*base case*/
	else if (y == 0)
		return (1);
	/*calcul x power y */
	return (x * _pow_recursion(x, y - 1));
}
