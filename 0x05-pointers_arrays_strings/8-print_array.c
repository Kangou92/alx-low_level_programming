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
if (n == 0)
{
printf("\n ");
}
for (i = 0; i < n; i++)
{
if (i <= n - 2)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
