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
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
