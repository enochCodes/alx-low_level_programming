#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator -  executes a function given as a parameter on each element of an array.
 * @size: the size of the array
 * @action: is apointer to the function you need to use
 * Return: NULL 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
