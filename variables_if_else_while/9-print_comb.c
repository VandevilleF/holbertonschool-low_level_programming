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
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
