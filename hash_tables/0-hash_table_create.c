#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newtab;

	/*Allocate memory for array*/
	newtab = malloc(sizeof(hash_table_t));

	if (newtab == NULL)
		return (NULL);

	newtab->size = size;

	/*Allocate memory for an array of hash_node_t pointers in the newtab struct*/
	newtab->array = malloc(sizeof(hash_node_t *) * size);

	if (newtab->array == NULL)
	{
		free(newtab);
		return (NULL);
	}
	/*Set all value on array to NULL*/
	for (i = 0; i < size; i++)
		newtab->array[i] = NULL;

	return (newtab);
}
