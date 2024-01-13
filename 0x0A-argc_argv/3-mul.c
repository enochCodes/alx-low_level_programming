#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments
 * @argc: integer representing the number of arguments
 * @argv: array of strings representing the arguments
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 3)
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

