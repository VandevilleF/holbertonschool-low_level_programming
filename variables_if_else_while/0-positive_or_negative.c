#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Positive anything is better than negative nothing
 * if: display is positive when n<0
 * if else display is zero when n=0
 * if else display is negative n>0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
