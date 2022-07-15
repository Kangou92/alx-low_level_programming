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
	int *b;

	for (i = 0; i < n; i++)
	{
		b[i] = a[n];
		n -= 1;
	}
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", b[i]);
	}
	printf("\n");
}
