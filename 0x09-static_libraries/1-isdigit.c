#include "main.h"

/**
 * _isdigit - verify if a int number is a digit or not
 * @c: integer which be verified
 *
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
