#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of the list
 * @head: pointer to pointer
 * @str: string to be duplicate
 * Return: new node at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*create a new node*/
	list_t *last_node, *temp;

	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
		return (NULL);

	/*copy str in the new node*/
	last_node->str = strdup(str);
	if (last_node == NULL)
	{
		free(last_node);
		exit(1);
	}

	/*calculate lenght of the new node*/
	last_node->len = strlen(str);

	/*If the list is empty, the new node become the head*/
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;

	else
	{
		/*traverse to find the last node and add the node at the end*/
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = last_node;
	}
	return (last_node);
}
