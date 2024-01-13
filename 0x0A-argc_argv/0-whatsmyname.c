#include <stdio.h>
/**
 * main - pass argumants
 * @argc: integr to cunte the argumment size
 * @argv: pointer arrray to store the arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

