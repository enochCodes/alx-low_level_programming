#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator -  executes a function given as a para
 * meter on each element of an array.
 * @size: the size of the array
 * @array: the arrays.
 * @action: is apointer to the function you need to use
 * Return: NULL 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
