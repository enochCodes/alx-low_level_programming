#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * @str: charactor
 * Return: copy of the string
 */
char *_strdup(char *str)
{
	 int length = strlen(str);
	char *string = malloc(sizeof(char) * length + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < length; i++)
		{
			string[i] = str[i];
		}
	return (string);
	string[i] = '\0';
	free(string);
	}
}
