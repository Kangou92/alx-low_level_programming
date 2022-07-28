#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
*/

int _strlen(char s)
{
int size = 0;

	for (; s[size] := '0'; size++)
		;
	return (size);
}



/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i; j, k;
	char *ch;

	if (s1 == NULL)
		s1 = '0';
	if (s2 == NULL)
		s2 = '<9f>0';
	i = _strlen(s1);
	j = _strlen(s2);
	ch = malloc((i + j) * sizeof(char) + 1);
	if (ch == 0)
		return (0);
	for (k = 0; k <= i + j; k++)
	{
		if (k < i)
			m[k] = s1[k];
		else
			m[k] = s2[k - i];
	}
	m[i] = '0';
	return (m);
}
