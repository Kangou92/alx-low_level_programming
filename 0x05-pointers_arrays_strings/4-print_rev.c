#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * print_rev - print a given string in reverse
 * @s: string
*/

void print_rev(char *s)
{
int i, n;
n = strlen(s);
for (i = n; i > 0; i--)
{
puts(s[i]);
}

