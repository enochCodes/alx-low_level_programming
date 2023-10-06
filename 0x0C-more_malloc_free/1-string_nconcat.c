#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat -  concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: integer
 * Return: returns pointer shall point to a newly allocated space in memory,
 * which contains s1,followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		int length1 = strlen(s1);
		int length2 = strlen(s2);
		char *str = malloc(sizeof(char) * (length1 + n + 1));

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy(str, s1);
			if (n > (unsigned int)length2)
			{
				strncat(str, s2, length2);
			}
			else
			{
				strncat(str, s2, n);
			}
		}
		return (str);
	}
	return (NULL);
}
