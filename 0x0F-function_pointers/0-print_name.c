#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name
 * @name: string
 * @f: pointer to charctor void.
 * Return: 0 NULL.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
