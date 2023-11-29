#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free DLL
 * @head: pointer to DLL
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		/*Save head in variable temp*/
		temp = head;
		/*Make head point to the next node*/
		head = head->next;
		/*Free safely variable temp*/
		free(temp);
	}
}
