#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node at the beguinning of DLL
 * @head: pointer to the first node
 * @n: variable
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	/*Add data in new node*/
	new_node->n = n;

	/*Set next to point to head*/
	new_node->next = *head;
	/*Set prev pointer to NULL*/
	new_node->prev = NULL;

	/*If list is not empty, set prev to the curent node head*/
	if ((*head) != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
