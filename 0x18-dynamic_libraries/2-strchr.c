#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string.
 * @s: pointer to chatacter
 * @c: charactor
 * Return: c is a caractor not NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
