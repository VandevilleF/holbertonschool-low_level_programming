#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: pointer to DLL
 * @idx: index where node need to be add
 * @n: value of node
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int find = 0;
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	if (h == NULL)
		return (NULL);

	/*Check for index*/
	while (find < idx && temp != NULL)
	{
		temp = temp->next;
		find++;
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/*Add at the beguinning*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*Add at the end*/
	else if (temp == NULL)
		return (add_dnodeint_end(h, n));

	/*Add at the specific index*/
	else
	{
		new_node->next = temp;
		new_node->prev = temp->prev;
		/*Set the next ptr on tne previous node to new_node*/
		temp->prev->next = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}
