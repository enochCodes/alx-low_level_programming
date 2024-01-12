#include "main.h"
#include <stdio.h>
/**
 *  _strspn -  gets the length of a prefix substring.
 *  @s: pointer to character
 *  @accept: charactor
 *  Return: from the accept string return all characotor
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *a;

	while (*s != '\0')
	{
		int found = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
