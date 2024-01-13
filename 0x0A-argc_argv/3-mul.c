#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments
 * @argc: integer representing the number of arguments
 * @argv: array of strings representing the arguments
 * Return: always 0.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
