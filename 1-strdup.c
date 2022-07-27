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
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = NULL;
	return (nstr);
}
