#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - checked the malloc
 * b - integer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
