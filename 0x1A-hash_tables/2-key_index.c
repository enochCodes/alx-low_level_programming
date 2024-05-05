#include "hash_tables.h"
/**
 * key_index - function retur the hash
 * @key: the key for the hash
 * @size: size of the hash table
 * Return: function return
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
