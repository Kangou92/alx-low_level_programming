#include<stdio.h>
/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
char i;
char c;
for (i = '0'; i <= '9'; i++)
{
putchar("%d", i);
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
