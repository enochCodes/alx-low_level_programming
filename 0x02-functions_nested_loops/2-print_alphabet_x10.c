#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int loop;

	for (loop = 1; loop <= 10; loop++)
	{
		int letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar(10);
	}
}
