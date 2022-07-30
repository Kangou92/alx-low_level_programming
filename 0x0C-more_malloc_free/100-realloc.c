#include "main.h"
#include <stdio.h>


/**
 * _realloc - reallocates a block of memory
 * @*ptr: pointer to the previous block
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int i, j;

	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size + old_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size = 0 && old_size != 0)
	{
		return (NULL);
	}
	return(ptr);
	free(ptr);
