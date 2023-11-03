#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main
 * @argc: count the number of argument
 * @argv: display arguments
 * Return: adds positive numbers
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	j = 0;
	if (argc < 2)
	{
		printf("0\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
		/*check is arg is digit*/
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
