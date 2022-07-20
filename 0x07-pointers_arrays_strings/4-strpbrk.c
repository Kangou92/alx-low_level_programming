#include "main.h"
/**
 * _strpbrk - search a string in another
 * @s: string
 * @accept: string
 * Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
