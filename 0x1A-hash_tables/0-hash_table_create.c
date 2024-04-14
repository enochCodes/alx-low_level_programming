#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: a new hash table size
 * Return: return the addrase of the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	new_hash_table->size = size;
	return (new_hash_table);
}
