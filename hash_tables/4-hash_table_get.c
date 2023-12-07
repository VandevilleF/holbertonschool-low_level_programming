#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value asso with element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
