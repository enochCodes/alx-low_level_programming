#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line
 * @argc: argumment counter
 * @argv: argumant vector .
 * Return: the new name, without having to compile it again
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
