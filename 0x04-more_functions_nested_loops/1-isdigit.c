#include "main.h"

/**
 * _isdigit - verify if a int number is a digit or not
 * @c: integer which be verified
 *
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	for (c = 0; c <= 127; c++)
	{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
}
