#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - print value of a n node
 * @head: pointer to DLL
 * @index: element give for find a node in the DLL
 * Return: value of the node find with index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int find = 0;

	while (find != index && head != NULL)
	{
		head = head->next;
		find++;
	}
	return (head);
}
