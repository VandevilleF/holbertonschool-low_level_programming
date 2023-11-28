#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add node at the beguinning
 * @head: pointer to pointer
 * @str: string to be duplicate
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	/*create a new node*/
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/*copy str in the new node*/
	new_node->str = strdup(str);
	if (new_node == NULL)
	{
		free(new_node);
		exit(1);
	}

	/*calculate lenght of the new node*/
	new_node->len = strlen(str);

	/*Add the new node at the beguinning*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
