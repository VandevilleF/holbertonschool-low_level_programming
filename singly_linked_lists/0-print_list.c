#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list of element and count them
 * @h: pointer to the pointer str to struct
 * Return: count of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/*Traversing the linked list*/
	while (h != NULL)
	{
		/*Check if str is NULL*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/*Print lenght and str*/
			printf("[%u] %s\n", h->len, h->str);

		/*Increment h to the next list*/
		h = h->next;
		count++;
	}
	return (count);
}
