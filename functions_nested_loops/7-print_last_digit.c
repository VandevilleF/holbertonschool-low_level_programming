#include "main.h"
/**
 * print_last_digit - last digit
 * @n: variable
 * Return: 0
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
		ldigit *= -1;
	_putchar(ldigit + '0');
	return (ldigit);
}
