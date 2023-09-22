#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - concatenates two strings.
 * @dest: string one.
 * @src: string two.
 * Retrun: print strcat
 */
char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
