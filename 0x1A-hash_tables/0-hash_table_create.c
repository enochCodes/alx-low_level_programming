#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table, NULL if something fails
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
