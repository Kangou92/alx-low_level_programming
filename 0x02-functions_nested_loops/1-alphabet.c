#include"main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet in lowercase
*/

void print_alphabet(void)

{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}
}
