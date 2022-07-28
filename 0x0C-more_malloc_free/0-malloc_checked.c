#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - returns a pointer to an allocated memory
 * @b: unsigned int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
}

