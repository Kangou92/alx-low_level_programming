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
	int *p, *q, i, j, k;

	j = 0;
	k = 0;
	p = a;
	q = a;
	for (i = n; i >= 0; i--)
	{
		p[k] = a[i];
		q[j] = p[k];
		j++;
		k++;
	}
}
