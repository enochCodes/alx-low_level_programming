#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to viof void pointer
 * @old_size: integer
 * @new_size: integer
 * Return: The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old and new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new = NULL;
	void *ptr_old = NULL;

	if (ptr == NULL)
	{
		ptr_old = malloc(new_size);
		return (ptr_old);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size != old_size)
	{
		ptr_new = malloc(new_size);
		memcpy(ptr_new, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
		return (ptr_new);
	}
	if (new_size == old_size)
		return (ptr);
	return (NULL);
}
