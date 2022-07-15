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

	for (i = 0; i < n; i++)
	{
		a[i] = a[n];
		n -= 1;
	}
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
