#include "main.h"

/**
 * _strlen_recursion - dermines the length of a string
 * @s: strint
 * Return: the length of the string
*/

int _strlen_recursion(char *s)

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}
}
