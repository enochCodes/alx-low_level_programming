#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - to multiply the numbers
 * @num1: integer first
 * @num2: second integer
 * Return: return integer
 */
int multiply(char *num1, char *num2)
{
	int result;

	result = atoi(num1) * atoi(num2);
	return (result);
}
/**
 * main - muliply the argumments
 * @argc: size of the integer
 * @argv: the pointer of the argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;
	int result;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
