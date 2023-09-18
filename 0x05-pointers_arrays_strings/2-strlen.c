#include "main.h"
/**
 * _strlen - eturns the length of a string.
 * @s: integer
 * @get_string: string.
 * Retrun: the length of the string.
 */
int _strlen(char *str)
{
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

