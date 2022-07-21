#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a given number
 * @n: integer
 * Return: integer
*/

int _sqrt_recursion(int n)
{
	if (! _sqrt_recursion())
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1 + _sqrt_recursion(n - 1));
	}
}
