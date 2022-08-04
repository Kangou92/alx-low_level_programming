#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
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
			if (va_arg(args, char *))
			{
			printf("%s", va_arg(args, char *));
			}
			else
			{
				printf("(nil)");
			}
			if (i < n - 1)
				if (separator)
					printf("%s", separator);
		}
		va_end(args);
		printf("\n");
}
