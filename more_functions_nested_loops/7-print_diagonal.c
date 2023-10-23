#include "main.h"
/**
 * print_line - print line
 * @n: variable
 * @l: variable
 * @s: variable
 * Return 0
 */

void print_line(int n)
{
	int l, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < n; s++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
