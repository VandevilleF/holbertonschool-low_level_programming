#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - void
 * char: début de la fonction
 * while: fin de la fonction
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
