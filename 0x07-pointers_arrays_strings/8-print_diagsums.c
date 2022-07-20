#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of element on the diagonal
 * @a:array
 * @size: integer
 * Return:void
*/

void print_diagsums(int *a, int size)
{
	int i, j, diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag_sum1 = diag_sum1 + *(a + i);
			}
		}
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (*(a + i) == *(a + j))
			{
				diag_sum2 = diag_sum2 + *(a + i);
			}
		}
	}
	printf("%d\n", diag_sum1);
	printf ("%d\n", diag_sum2);
}
