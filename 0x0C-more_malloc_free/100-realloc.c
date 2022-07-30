#include "main.h"
#include <stdio.h>


/**
 * _realloc - reallocates a block of memory
 * @*ptr: pointer to the previous block
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
=======
#include <stdlib.h>


/**
 * _realloc - reallocates a bloc of memory
 * @*ptr: void
 * @old_size: integer
 * @new_size: integer
>>>>>>> 38376b4cf155d7eb1eebe647679011e3d8a82cb7
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


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
}
