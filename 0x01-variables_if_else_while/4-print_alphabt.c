#include<stdio.h>
/**
 * main - entry point
 * Return:0
*/

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
	if (c == 'e' || c == 'q')
	{
		continue;
	}
}
return (0);
}
