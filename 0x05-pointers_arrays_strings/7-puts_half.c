#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * puts_half - print the half of a string
 * or the last n character if the length is a odd number
 * @str:string which half is to printed
*/

void puts_half(char *str)
{
int i, n, j;
j = strlen(str);
if (j % 2 == 0)
{
	for (i = j / 2; i > 0; i--)
	{
		putchar(str[i]);
	}
}
else
{
n = (j - 1) / 2;
for (i = n; i >= 0; i--)
{
	putchar(str[i]);
}
}
putchar('\n');
}
