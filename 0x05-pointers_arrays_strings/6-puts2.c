#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * puts2 - print the first character of a given
 * string with all th other character
 * @str:string to use
*/

void puts2(char *str)
{
int i, j;
j = strlen(str);
for (i = 1; i < j - 1; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
