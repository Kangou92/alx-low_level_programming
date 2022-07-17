#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 11)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		i++;
	putchar('\n');
	}
}
