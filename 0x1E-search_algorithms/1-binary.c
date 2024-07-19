#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 *         or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t leftindex, rightindex, index;

	if (array == NULL || size == 0)
		return (-1);

	leftindex = 0;
	rightindex = size - 1;

	while (leftindex <= rightindex)
	{
		printf("Searching in array: ");
		for (index = leftindex; index <= rightindex; index++)
		{
			printf("%d", array[index]);
			if (index < rightindex)
				printf(", ");
		}
		printf ("\n");

		index = (leftindex + rightindex) / 2;
		if (array[index] < value)
			leftindex = index + 1;
		else if (array[index] > value)
			rightindex  = index - 1;
		else
			return (index);
	}
	return (-1);
}
