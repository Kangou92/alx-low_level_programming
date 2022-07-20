#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _print_rev_recursion - print a string reversed
 * @s: string
 * Return:void
*/

void _print_rev_recursion(char *s)
{
	int i = 0, j;
	char *ch = s;

	while (*(s + i))
	{
		i += 1;
	}
	for (j = 0; j < i; j++)
	{
		*(ch + j) = *(s + i);
			i--;
	}
	puts(ch);
}
