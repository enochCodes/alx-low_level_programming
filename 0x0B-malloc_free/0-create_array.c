#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * @c: charachtor
 * @size: integer the size of the string
 * Return:  NULL if size = 0, and Returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *A = malloc(size * sizeof(char));

		if (A == NULL)
		{
			return (NULL);
		}
		else
		{
			unsigned int i;

			for (i = 0; i < size; i++)
			{
				A[i] = c;
			}
			return (A);
		}
	}
}
