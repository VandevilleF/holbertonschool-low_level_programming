#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *temp, *new_node;

	if (ht == NULL || key == NULL)/*Check is ht and key is not NULL*/
		return (0);
	if (value == NULL)/*Check is NULL, value can be an empty str*/
		value = "";

	size = ht->size;
	index = key_index((unsigned char *) key, size);
	temp = ht->array[index];

	while (temp != NULL)/*Check for collision*/
	{
		if (strcmp(temp->key, key) == 0)/*If key already exists*/
		{
			free(temp->value);
			temp->value = strdup(value);/*Value update*/
			return (1);
		}
		temp = temp->next;
	}
	/*Create new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	/*Add node at the beginning*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
