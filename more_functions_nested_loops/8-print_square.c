#include "main.h"
/**
 * print_square - print square
 * @size: variable
 * @l: variable
 * @h: variable
 * Return 0
 */

void print_square(int size)
{
	int l, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 0; h < size; h++)
		{
			for (l = 0; l < size; l++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
