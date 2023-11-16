#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main
 * @argc: count the number of arguments
 * @argv: display arguments
 * Return: operat between a and b
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)();

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
		if (operator == NULL)
		{
			printf("Error\n");
			exit(99);
		}
	printf("%d\n", operator(num1, num2));
	return (0);
}
