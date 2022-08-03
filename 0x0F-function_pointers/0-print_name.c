#include <stdio.h>
#include <stdlib.h>
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
	f(name);
}
