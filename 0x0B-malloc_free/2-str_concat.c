#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two st
 * @s1:the first strings
 * @s2:the second strings
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	char *concStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	size = strlen(s1) + strlen(s2);

	concStr = (char *) malloc((size + 1) * sizeof(char));

	if (concStr == NULL)
		return (NULL);

	strcpy(concStr, s1);
	strcat(concStr, s2);

	return (concStr);
	free(concStr);
}

