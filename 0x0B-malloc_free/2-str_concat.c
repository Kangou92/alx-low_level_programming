#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	k = i + j;
	ch = (char *)malloc((k * sizeof(char) + 1));
	j = 0;
	while (l < k)
	{
		if (l < i)
		ch[k] = s1[k];
		if (l >= i)
		{
			ch[l] = s2[j];
			j++;
		}
		l++;
	}
	ch[l] = '\0';
		return (ch);
}
