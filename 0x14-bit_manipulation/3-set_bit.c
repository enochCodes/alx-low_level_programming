#include "main.h"
/**
 * set_bit - set bit
 * @n: integer
 * @index: index bit
 * Return: decimal
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
