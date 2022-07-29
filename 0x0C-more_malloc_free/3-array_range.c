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
	int *array, *tmp;
	int i, l;

	tmp = array;
	if (min > max)
	{
		return (NULL);
	}
	l = max - min;
	array = malloc((l + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (array[i] > array[i + 1])
			{
				tmp[j] = array[i + 1];
				array[i] = array[i + 1];
			}
		}
	}
	array = tmp;
	return (array);
}
