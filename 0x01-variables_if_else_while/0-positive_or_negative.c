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
	printf("%d", n "\n is positive");
}
else
{
	if (n == 0)
	{
		printf("%d", n "\n The number is zero");
	}
	else
	{
		printf("%d", n "\n is negative");
	}
}
return (0);

}
