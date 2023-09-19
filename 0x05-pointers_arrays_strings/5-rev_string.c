#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int reversed[] = strlen(s);

	for (i = reversed - 1; i >= 0; i--)
		printf("%c\n", s[i]);
}
