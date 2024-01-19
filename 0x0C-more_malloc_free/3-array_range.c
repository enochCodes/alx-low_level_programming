#include "main.h"
#include <stdlib.h>
/**
 * *array_range - array pointer
 * @min: minumun integer of array
 * @max: maximum integer of array
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *result;
	int size;
	int i;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	result = malloc(size * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = min + i;
	return (result);
}
