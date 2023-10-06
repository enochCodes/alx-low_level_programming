#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using malloc.
 * @b: unsigned intger
 * Return: malloc cheked if the malloc cheked is null return 98.
 */
void *malloc_checked(unsigned int b)
{
	void *index;
	
	index = malloc(b);
	if (index == NULL)
		exit(98);
	return (index);
}
