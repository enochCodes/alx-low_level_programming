#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc -  allocates memory for an array, using malloc.
 * @nmemb: unsinged integer
 * @size: unsigned integer
 * Return: The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(ptr, 0, total_size);
		return (ptr);
	}
	return (NULL);
}
