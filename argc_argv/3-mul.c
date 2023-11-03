#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: count the number of argument
 * @argv: display arguments
 * Return: print multiplications of 2 numbers
 */
int main(int argc, char *argv[])
{
	int sum, num1, num2;


	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	return (0);
	}
}
