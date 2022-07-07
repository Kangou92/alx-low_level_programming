#include "main.h"
#include "main.c"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return:always 0
*/
int main(void)
{
int n;
positive_or_negative(0);
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("%d", n);
	printf(" ");
	printf("is positive\n");
}
else
{
	if (n == 0)
	{
		printf("%d", n);
		printf(" ");
		printf("is zero\n");
	}
	else
	{
		printf("%d", n);
		printf(" ");
		printf("is negative\n");
	}
}
return (0);

}
