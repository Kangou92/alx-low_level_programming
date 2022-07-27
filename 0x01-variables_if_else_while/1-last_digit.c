#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry Point
 * Return: always 0
*/
int main(void)
{
int n, i;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
i = n % 10;
if (i > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, i);
}
else
{
	if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		if ((i < 6) && (i != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
		}
	}
}
return (0);
}
