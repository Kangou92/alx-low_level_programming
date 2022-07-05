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
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("\nThe number is positive %f", n);
}
else
{
	if (n == 0)
	{
		printf("\n The number is zero %f", n);
	}
	else
	{
		printf("\nThe number is negative %f", n);
	}
}
return (0);

}
