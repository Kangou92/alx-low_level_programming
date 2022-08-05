#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


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
	ch = va_arg(args, char *);
	if (!ch)
		ch ="(nil)";
	if (!separator)
		printf("%s", ch);
	else if (separator && i == n -1)
		printf("%s", ch);
	else
		printf("%s%s", separator, ch);
	
	}
	va_end(args);
		putchar('\n');
}
