#include "main.h"

/**
 * _strlen_recursion - dermines the length of a string
 * @s: strint
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{
		i += _strlen_recursion(char *s);
		return (i);
	}
	else
	return (0);
}
