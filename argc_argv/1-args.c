#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: count the number of argument
 * @argv: __attribute__((unused))
 * Return: name of program
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
