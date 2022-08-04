#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * prints_strings - prints all the strings its get as parameter
 *
 * @separator: string
 * @n: number of string to be print
*/

void prints_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && va_arg(args, char *) != NULL)
		{
			printf("%s\n", va_arg(args, char *));
			printf("%s\n", separator);
			va_end(args);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
