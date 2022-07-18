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
	int i;
	char *ch;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			ch = s[i];
		}
		else
			ch = NULL;
	}
return (ch);
}
