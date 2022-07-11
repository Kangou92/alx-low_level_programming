#include<stdio.h>
#include<stdlib.h>
/**
 * swap_int - take two integers in argument
 * and swap their values
 * @a:integer
 * @b:integer
*/

void swap_int(int *a, int *b)
{
int n;
n = *b;
*b = *a;
*a = n;
}
