#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing arguments.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length;
	int index;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	result = malloc((length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[index++] = av[i][j];
		result[index++] = '\n';
	}
	result[length] = '\0';

	return (result);
}

