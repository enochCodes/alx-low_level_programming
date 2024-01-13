#include <stdio.h>
/**
 * main - print the numebr of argument
 * @argc: intger the size of the argumment
 * @argv: pointer to array tos store the argummnet
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

