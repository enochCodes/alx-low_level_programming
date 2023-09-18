#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: integer
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
