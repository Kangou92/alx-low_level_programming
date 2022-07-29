#include "main.h"
#include <stdlib.h>

/**
 * _calloc -allocates memory for an array
 *
 * @nmemb: firs param
 * @size: second param
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	mem = ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = '\0';
	}
	return (ptr);
}
