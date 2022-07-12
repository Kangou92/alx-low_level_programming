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
n = j / 2;
else
n = j / 2 + 1;
for (i = n; i <= j; i++)
putchar(str[i]);
putchar('\n');
}
