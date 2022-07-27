#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - print a string followed by a new line
 * @s:string
 * Return: void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		puts(s + i);
		i += 1;
	}
	else
		puts("");
}
