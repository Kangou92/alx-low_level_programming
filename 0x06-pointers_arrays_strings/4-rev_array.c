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
		a[n] = a[n];
		n -= n;
	}
}
