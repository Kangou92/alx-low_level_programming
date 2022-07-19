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
		for (j = 0; accept[j]; j++)
		{
		if (*s == accept[j])
		{
			i++;
			break;
		}
		else if (accept[j + 1] == '\n')
		return (i);
		}
	}
return (i);
}
