#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *temp, *node;

	if (ht == NULL)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = node;
		}
	}
	free(ht->array);
	free(ht);
}
