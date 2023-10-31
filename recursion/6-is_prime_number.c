#include "main.h"
#include <stdio.h>
/**
 * prime_recursive - prime
 * @n: variable
 * @d: variable test
 * Return: value if prime (1) or not (0)
 */

int prime_recursive(int n, int d)
{
	if (n < 2)
		return (0);
	else if (d * d > n)
		return (1);
	else if (n % d == 0)
		return (0);
	else
		return (prime_recursive(n, d + 1));
}
/**
 * is_prime_number - check is prime or not
 * @n: number we need to find if is prime
 * Return: value if prime (1) or not (0)
 */

int is_prime_number(int n)
{
	return (prime_recursive(n, 2));
}
