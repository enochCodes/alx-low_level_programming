#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * countSpaces - count the word
 * @str: string
 * Return: numebr of words
 */
int countSpaces(const char *str)
{
	int count;

	count = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	return (count);
}
#include "main.h"
/**
 *  **strtow - count words
 *  @str: string
 *  Return: return the word
 */
char **strtow(char *str)
{
	int wordCount = countSpaces(str) + 1;
	char **words = (char **)malloc(wordCount * sizeof(char *));
	int i;
	int j;
	int wordLength;
	const char *wordStart;
	
	wordLength = 0;
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*str)
	{
		while (*str == ' ')
		{
			str++;
		}
		if (*str == '\0')
		{
			break;
		}
		wordStart = str;
		while (*str && *str != ' ')
		{
			str++;
		}
		wordLength = str - wordStart;
		words[i] = (char *)malloc((wordLength + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[i], wordStart, wordLength);
		words[i][wordLength] = '\0';
		i++;
	}
	return (words);
}
