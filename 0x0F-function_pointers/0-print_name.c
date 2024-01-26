#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name
 * @name: charactor
 * @f: functional pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
