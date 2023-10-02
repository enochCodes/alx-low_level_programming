#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * return: the stirng followd by new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	putchar(*s);
	 _puts_recursion(s + 1);
}
