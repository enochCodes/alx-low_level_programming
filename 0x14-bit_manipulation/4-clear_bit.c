#include "main.h"
/**
 * clear_bit - to set the value of bit to 0 at a give index
 * @index: a give value
 * @n: a give integer
 * Return: value of bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
