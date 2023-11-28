#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to pointer
 * Return: a linked list empty
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/*Save head in variable temp*/
		temp = head;
		/*Make head point to the next node*/
		head = head->next;
		/*Safely free variable temp*/
		free(temp->str);
		free(temp);
	}
}
