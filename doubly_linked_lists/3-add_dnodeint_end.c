#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of DLL
 * @head: pointer to the list
 * @n: variable
 * Return: address of the last node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *temp;

	last_node = malloc(sizeof(dlistint_t));

	if (last_node == NULL)
		return (NULL);

	/*Add data in the nex node*/
	last_node->n = n;

	/*Set pointers of the new node*/
	last_node->next = NULL;

	/*Check if list is empty list*/
	if ((*head) == NULL)
		(*head) = last_node;

	else
	{
		temp = *head;

		/*Traverse to find the last node*/
		while (temp->next != NULL)
			temp = temp->next;

		/*Add the node at the end of the DLL*/
		temp->next = last_node;
		last_node->prev = temp;
	}
	return (last_node);
}
