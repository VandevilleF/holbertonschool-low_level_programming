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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
