#include "main.h"
#include <stdlib.h>


/**
 * *array_range - reates an array of integers
 *
 * @min: the minimum of the array
 * @max: the maximum of the array
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *array
	unsigned int l;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	l = max - min + 1;
	array = malloc(sizeof(int) * l);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		array[min++];
	}

	return (array);
}
