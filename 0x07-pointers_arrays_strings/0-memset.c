#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory pointed by s
 * @b: char
 * @s: pointer
 * @n: unsigned int
 * Return: a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char **ch;

	*s = b;
	ch = &s;
	return (ch);
}
