#include "main.h"
#include <stdlib.h>

/**
 *
 * _strdup - returns a pointer to
 * a newly allocated memory
 *
 * @str: pointer to a string
 * Returns: a pointer
*/

char *_strdup(char *str)
{
	char *nstr;
	 int i = 0, j;

	if (!*str)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		i++;
	}
	nstr = malloc(sizeof(char) * i);
	if (*nstr == '\0')
	{
		return (NULL);
	}
	for (j = 0; i <= i; j++)
	{
		nstr[j] = str[i];
	}
	return (nstr);
}
