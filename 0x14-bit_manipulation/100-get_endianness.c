#include "main.h"
/**
 * get_endianness - to check the endianness of the system
 * Return: the endianness
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian = (char *)&check;

	return (*endian);
}
