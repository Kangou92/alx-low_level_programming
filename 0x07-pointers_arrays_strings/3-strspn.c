#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - print the length of a substring
 * @s: string
 * @accept: substring
 * Return: unsined int
*/

unsigned int _strspn(char *s, char *accept)
{
	char *ch = accept;
	unsigned int i = 0, j;

	while (*s)
	{
		while (*accept++)
		{
		if (*(s - 1) == *(accept - 1))
		{
			i++;
			break;
		}
		if (!(*--accept))
			break;
		accept = ch;
		}
	}
	a++;
	j = i * sizeof(accept);
	return (j);
}
