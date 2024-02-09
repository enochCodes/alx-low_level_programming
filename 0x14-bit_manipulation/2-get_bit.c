#include "main.h"
/**
 * get_bit - get the bit
 * @n: integer
 * @index: the index of bit
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
