#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  multiplies two positive numbers.
 * @argc: integer one passed in base 10.
 * @argv: integer two passed in base 10.
 * print the result followed by new line
 * Return: If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line, and exit with a status of 98
 */
int  main(int argc, char **argv)
{
	int result;
	int i;
	int j;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
