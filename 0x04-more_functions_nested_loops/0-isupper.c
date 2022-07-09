#include "main.h"
#include<ctype.h>
#include<stdio.h>
/**
 * main - entry point
 * Return: always 0
*/
int main(void)
{
char c;
_isupper(c);
}
/**
 * _isupper -entry point
 * test if a letter is uppercase
 * @c: integer
 *
 * Return:0
*/
int _isupper(int c)
{
if (isupper(c) == 1)
{
	return (1);
}
else
{
	return (0);
}
}
}
