#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints  numbers separates by separator
 * @separator: string
 * @n: integer
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL && i != (n - 1))
			{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
			}
			else
			{
			printf("%d", va_arg(args, int));
			}
			va_end(args);

		}
	}
	printf("\n");
}
