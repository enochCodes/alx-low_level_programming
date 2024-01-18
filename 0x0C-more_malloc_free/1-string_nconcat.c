#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - characotr yessaxage amnaklawe
 * @s1: string1
 * @s2: string2
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;
	char *str;
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		n = length2;
	str = malloc(length1 + n + 1 * sizeof(char));

	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strncat(str, s2, n);

	return (str);
}
