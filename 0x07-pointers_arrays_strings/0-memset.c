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
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i += 1;
	}
return (s);
}
