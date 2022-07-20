#include "main.h"
/**
 * _strpbrk - search a string in another
 * @s: string
 * @accept: string
 * Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(s + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + i);
		}
	}
	return ('\0');
}
