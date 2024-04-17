#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: return the addrase of the new hash table NULL if something wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new_hash_table = NULL;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	new_hash_table->size = size;

	return (new_hash_table);
}
