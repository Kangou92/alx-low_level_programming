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
	int i, diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
	diag_sum1 = diag_sum + *(a + (size * i + i));
	diag_sum2 = diag_ sum2 += *(a + (size * i + size - 1 - i));	
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
