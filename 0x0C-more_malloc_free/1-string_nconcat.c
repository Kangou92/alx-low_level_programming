#include "main.h"
#include <stddef.h>
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
	unsigned int i = n, j;
	char *ch;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (j = 0; s1[j]; j++)
		i++;
		ch = malloc(sizeof(char) * i + 1);

	if (ch == NULL)

		return (NULL);
		j = 0;

	for (j = 0; s1[j]; j++)

		ch[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)

		ch[i++] = s2[j];

	ch[i] = '\0';

	return (ch);
}
