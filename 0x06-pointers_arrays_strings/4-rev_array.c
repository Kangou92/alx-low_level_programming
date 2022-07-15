#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * reverse_array - reverse the element of an array of n element
 * @a: array to be reversed
 * @n: number of element of the array
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (i = 0)
		{
			printf("%d", a[i]);
		}
		else
		printf("%d, ", a[i]);
	}
}

