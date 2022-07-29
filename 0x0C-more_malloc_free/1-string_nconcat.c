#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *ch;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (index = 0; s1[index]; index++)
		len++;
		ch = (char *)malloc(sizeof(char) * len + 1);

	if (ch == NULL)

		return (NULL);
		len = 0;

	for (index = 0; s1[index]; index++)

		ch[len++] = s1[index];

	for (j = 0; s2[index] && index < n; index++)

		ch[len++] = s2[index];

	ch[len] = '\0';

	return (ch);
}
