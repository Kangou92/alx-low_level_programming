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
	unsigned int j;
	char *ch = s;

	j = stlen(*s);
	*ch = (s + j);
	j--;
	puts(ch);
}
