#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers.
 * @min: minimum integer for arrys
 * @max: maximum number for arrys
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int array_size;

	if (min > max)
		return (NULL);
	array_size = max - min + 1;
	array = malloc(array_size * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < array_size; i++)
	{
		array[i] = min++;
	}
	return (array);
}

