#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert decimal to binary
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
