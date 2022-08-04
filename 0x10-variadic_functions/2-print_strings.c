#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
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
	char *ch;

		if (separator != NULL)
		{
			separator = "";
		}
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			ch = va_arg(args, char *);
			if (ch == NULL)
			{
				ch = "(nil)";
			}
			printf("%s", ch);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
}
