#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c:character
 * Return: pointer to a character
*/

char *_strchr(char *s, char c)
{
	char *ch;

	while (s[a])
	{
		a++;
		for (i = 0; i < a; i++)
		{
		if (s[a] == c)
		{
			ch = s[a];
		}
		else
		ch = NULL;
		}
	}	
return (ch);
}
