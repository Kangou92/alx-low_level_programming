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
	char *ch = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (ch);
	}
}
