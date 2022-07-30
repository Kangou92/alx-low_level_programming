#include "main.h"
#include <stdlib.h>


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
	void *memo;
	char *ptrcpy, *filter;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		memo = malloc(new_size);
		if (memo == NULL)
			return (NULL);
		return (memo);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	filter = memo;
	for (i = 0; i < old_size && i < new_size; i++)
		filter[i] = *ptrcpy++;
	free (ptr);
	return (memo);
}
