#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: returned pointer should point.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		int length1 = (s1 != NULL) ? strlen(s1) : 0;
		int length2 = (s2 != NULL) ? strlen(s2) : 0;

		char *str = malloc(sizeof(char) * (length1 + length2 + 1));

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			if (s1 != NULL)
			{
				strcpy(str, s1);
			}
			if (s2 != NULL)
			{
				strcat(str, s2);
			}
		}
		return (str);
		return ("\n");
	}
}
