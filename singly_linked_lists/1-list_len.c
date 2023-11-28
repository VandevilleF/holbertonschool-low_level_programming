#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - count numbers of list
 * @h: pointer to element of list
 * Return: number of list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	/*Traversing the linked list*/
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
