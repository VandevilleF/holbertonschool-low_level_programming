#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to the DLL
 * @index: index of the node that sould be delete
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_del = *head;
	unsigned int find = 0;

	/*Is is an empty list*/
	if (*head == NULL)
		return (-1);

	/*If index it's the first node*/
	if (index == 0)
	{
		*head = node_del->next;

		/*If node it's the last node*/
		if (node_del->next == NULL)
			node_del->next->prev = node_del->prev;

		free(node_del);

		return (1);
	}

	while (find < index && node_del != NULL)
	{
		node_del = node_del->next;
		find++;
	}

	/*Check if index is greater than the DLL*/
	if (node_del == NULL)
		return (-1);

	node_del->prev->next = node_del->next;

	if (node_del->next != NULL)
		node_del->next->prev = node_del->prev;

	free(node_del);

	return (1);
}

