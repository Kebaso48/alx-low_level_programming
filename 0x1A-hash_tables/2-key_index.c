#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key to get index
 * @size: size of the array of the ash tables
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
