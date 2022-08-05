#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_strings - prints all the strings its get as parameter
 *
 * @separator: string
 * @n: number of string to be print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			str =  va_arg(strings, char *);
			if (str == NULL)
			{
				printf("(nil)");
				printf("%s", separator);
			}
			else if (i < n - 1)
			{
				printf("%s", str);
				printf("%s", separator);
			}
			else
			{
				printf("%s", str);
			}
		}
		printf("\n");
		va_end(strings);
}
