#include "main.h"


/**
 * print_last_digit - prints the last digit of an intger
 *
 * @n: integer
 * Return: last digit
*/

int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;
	if (n < 0)
	{
		lastdig = -lastdig;
	}
	_putchar(lastdig + '0');
	return (0);
}
