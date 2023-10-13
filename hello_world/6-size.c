#include <stdio.h>
/**
 * main - Hello, printf
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %lubyte(s)\n", sizeof(char));
	printf("size of an int: %lubyte(s)\n", sizeof(int));
	printf("size of a long int: %lubyte(s)\n", sizeof(long int));
	printf("size of a long long int: %lubyte(s)\n", sizeof(long long int));
	printf("size of a float: %lubyte(s)\n", sizeof(float));
	return (0);
}
