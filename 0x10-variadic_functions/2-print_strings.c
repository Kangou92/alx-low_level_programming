#include <stdio.h>
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
	char *ch;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ch = (va_arg, char*)
		if (separator != NULL && ch != NULL)
		{
			printf("%s", ch);
			printf("%s", separator);
			va_end(args);
		}
		else
		{
			printf("(nil)\n");
		}
	}
	printf("\n");
}
