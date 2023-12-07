#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *temp;
	char *sep = "";

	if (ht == NULL)
		return;

	size = ht->size;

	printf("{");

	for (i = 0; i < size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			printf("%s'%s' : '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
