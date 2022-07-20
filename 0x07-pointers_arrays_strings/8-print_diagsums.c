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
	int i, j, diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag_sum = diag_sum + *(a + i) + *(a + j);
			}
		}
	}
	printf("%d\n", diag_sum);
}
