#include<stdio.h>
/**
 * main - entry point
 * Return:0
*/

int main(void)
{
char c;
char e = ' '
for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'e' || c == 'q')
	{
		continue;
	}
	putchar(e);
}
return (0);
}
