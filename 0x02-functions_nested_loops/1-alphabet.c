#include "main.h"

/**
 * print_alphabet - check the code
 * it prints in lowercase
 * Return: no return
 */
int print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
}
