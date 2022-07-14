#include<stdio.h>
/**
 * main - print the commibination of
 * two two digits
 * Return:always 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 57; i++)
	{
		for (j = 0; j <= 57; j++)
		{
			while (i <= j)
			{
				putchar(i);
				putchar(i);
				putchar(48);
				putchar(j + 1);
				putchar(32);
				putchar(44);
			}
		}
	}
	putchar(10);
return (0);
}
