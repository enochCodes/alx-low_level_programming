#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @height: intger heht of the example
 * @width: width of the squar
 * Retrun: return pointerd 2 dimentional.
 */
int **alloc_grid(int width, int height)
{
	if (width == NULL && height == NULL)
	{
		return (NULL);
	}
	int W;
		int H;
	
