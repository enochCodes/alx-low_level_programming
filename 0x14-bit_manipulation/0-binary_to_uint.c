#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - binary to decimal
 * @b: pointer the binary
 * Return: the decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int size;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);


	size = strlen(b);

	for (i = 0;  i < size; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			decimal += 1 << (size - 1 - i);
	}
	return (decimal);
}
