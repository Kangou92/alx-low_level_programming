#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int i;
i = n % 10;
if (i > 5)
{
	printf("Last digit of");
	printf("");
	printf("%d", n);
	printf("");
	printf("is");
	printf("");
	printf("%d", i);
	printf("");
	printf("and is greater than 5");
}
else
{
	if (i == 0)
	{
		printf("Last digit of");
		printf("");
		printf("%d", n);
		printf("");
		printf("is");
		printf("");
		printf("%d", i);
		printf("");
		printf("and is 0");
	}
	else
	{
		if (i < 6 && i = !0)
		{
			printf("Last digit of");
			printf("");
			printf("%d", n);
			printf("");
			printf("is");
			printf("");
			printf("%d", i);
			printf("");
			printf("and is less than 6 and is not 0");
		}
	}
}
return (0);
}
