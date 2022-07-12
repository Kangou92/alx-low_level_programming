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
if (n <= 0)
{
printf('\0');
}
if (n == 1)
{
printf("{ %d }; ", a[1]);
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
