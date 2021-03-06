#include "main.h"
#include <stdlib.h>


/**
 * *create_array - creates an array of char
 * @size: unsigned int
 * @c: char
 * Return: pointer
*/

char *create_array(unsigned int size, char c)

{
	unsigned int i;

	char *ch = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ch + i) = c;
	}
		return (ch);
}
