#include "main.h"
/**
 * main - void
 * putchar: affiche un caractere
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
