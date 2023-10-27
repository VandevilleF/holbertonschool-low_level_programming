#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reverser array
 * @a: pointeur de st
 * @n: variable
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
	int *st = a;
	int *end = a + n - 1;

	while (st < end)
	{
	/*swap st et end*/
		int temp = *st;

		*st = *end;
		*end = temp;
		st++;
		end--;
	}
}
