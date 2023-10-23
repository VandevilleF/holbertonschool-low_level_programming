#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: variable
 * @l: variable
 * @s: variable
 * Return 0
 */

void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
