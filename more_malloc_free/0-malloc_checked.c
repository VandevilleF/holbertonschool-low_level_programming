#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *allmemo;

	allmemo = malloc(b);/*Allocate memory specified by (b)*/
	if (allmemo == NULL)
		exit(98);/*Terminates immediately program with 98 to signal error */
	return (allmemo);
}
