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
	int i, j = 0;
	char *ch;

	while (s[j])
		j++
	for (i = 0; i < j; i++)
	{
	if (s[i] == c)
	{
		s[i] = c;
		ch = s;
		continue;
	}
	else
		ch = '\n';
	}
return (ch);
}
