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

	newtab = malloc(sizeof(hash_table_t));

	if (newtab == NULL)
		return (NULL);

	newtab->size = size;

	newtab->array = malloc(sizeof(hash_node_t *) * size);

	if (newtab->array == NULL)
	{
		free(newtab);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newtab->array[i] = NULL;

	return (newtab);
}
