#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in the array
 *
 * @array: array of integers
 * @size: int
 * @cmp: pointer to the function
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && cmp)
	{
		for (i = 0; i <= size; i++)
		{
			j = cmp(*(array + i));
		}
	}
	return (j);
}
