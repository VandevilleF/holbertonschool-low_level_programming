#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - select the good function
 * @s: argument
 * Return: pointer to the function correct
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		/*if s and index of array(ops) of ptr (.op) it's same*/
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);/*return ptr of function corresp*/
		i++;
	}
	return (NULL);
}
