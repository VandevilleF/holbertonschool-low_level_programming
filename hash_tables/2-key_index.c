#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: index where the key/value should be stored in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_value, index;

	/*Calculate the hash value*/
	h_value = hash_djb2(key);
	/*Calculate index with modulo of the hash value with the size of the array*/
	index = h_value % size;

	return (index);
}
