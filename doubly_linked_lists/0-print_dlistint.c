#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all element of a double linked list
 * @h: pointer to list
 * Return: count of all element print
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/*Traversing the linked list*/
	while (h != NULL)
	{
		/*Check if n is NULL*/
		if (h->n == '\0')
			return (-1);

		else
			/*Print n*/
			printf("%d\n", h->n);
		/*Increment h to the next link*/
		h = h->next;
		count++;
	}
	return (count);
}
