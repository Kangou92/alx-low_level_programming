#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates array
 *
 * @array: array to be iterates
 * @size: size of the array
 * @action: function that executes on the array element
 * Return: No
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
		action(*(array + i));
		}

	}
}

