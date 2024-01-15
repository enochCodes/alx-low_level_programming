#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - a fucntion that reactrn the pointer
 * @str: input string
 * Return: return the newStr
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *newStr;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	newStr = malloc((size + 1) * sizeof(char));

	if (newStr == (NULL))
		return (NULL);
	strcpy(newStr, str);
	return (newStr);
	free(newStr);
}
