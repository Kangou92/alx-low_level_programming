#include<stdio.h>
/**
 * main - print the combination of two digit
 * Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57;  j++)
		{
			if (j < i)
			{
			putchar(i);
			putchar(j);
			}
			if (i != 56 || i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
return (0);
}
