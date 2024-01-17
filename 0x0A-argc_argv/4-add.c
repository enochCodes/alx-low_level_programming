#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - check the array was all intger or not
 * @str: string
 * Return: the integer
 */
int isInteger(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);

	return  (*endptr == '\0');
}
/**
 * main - add all integer argimmnets
 * @argc: the size of the arguments
 * @argv: integer pointer  array of th eargument
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isInteger(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
