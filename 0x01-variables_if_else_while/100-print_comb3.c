#include<stdio.h>
/**
 * main - print the combination of two digit
 * Return: 0
*/

in main(void)
{
	int i, j, c;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		for (j = 48; j <= 57; j++)
		{
			if (i != j)
			{
				while (c != j)
				{
				putchar(j);
				c += 1;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
return (0);
}
