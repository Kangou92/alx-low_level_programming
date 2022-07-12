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
int i;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf(a[n]);
}
