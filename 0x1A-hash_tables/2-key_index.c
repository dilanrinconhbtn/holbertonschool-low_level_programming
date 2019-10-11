#include "hash_tables.h"
/**
 * key_index - give the index of a key
 * @key: key
 * @size: Size of  array for the hash table
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
