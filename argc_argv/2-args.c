#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: count the number of argument
 * @argv: display arguments
 * Return: print all arguments
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
