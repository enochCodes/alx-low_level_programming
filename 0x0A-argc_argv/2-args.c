#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: intger that store the zise of the argumment
 * @argv: pointer array  the story the argumments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

