#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a pointer function create the array
 * @size: the size of the array
 * @c: characotr intialized the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
