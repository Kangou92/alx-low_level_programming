#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign of a given number
 * @n:number which sign be test
 * Return: 1 if positive 0 if null and -1 if negative
*/

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
