#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to
 * a newly allocated memory
 *
 * @str: pointer to a string
 * Return: a pointer
*/

char *_strdup(char *str)
{
	char *nstr;
	 int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[j] != '\0'; j++)
		;
	nstr = malloc(j * sizeof(*str) + 1);
	if (nstr == 0)
	{
		return (NULL);
	}
	else
	{
	for (; i < j; i++)
	{
		nstr[i] = str[i];
	}
	}
	return (nstr);
}
