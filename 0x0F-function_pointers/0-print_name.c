#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: string
 * @f: function to pointer
 * Return: No
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
