#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	char a;
	int i;

		for (a = 'a'; a <= 'z'; a++)
		{
			while (i < 11)
			{
			putchar(a);
			i++;
			}
		}
	putchar('\n');
}
