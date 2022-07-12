#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *  print_array - print th element of a
 *  given array
 *  @a: array to print
 *  @n:interger
*/

void print_array(int *a, int n)
{
int i, j;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
j = n;
printf("%d", a[j]);
}
