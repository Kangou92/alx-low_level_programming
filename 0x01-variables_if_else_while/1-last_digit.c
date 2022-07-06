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
	printf("\ Last digit of is and is greater than 5" "%d" "%d", n i);
}
else
{
	if (i == 0)
	{
		printf("\n Last digit of is and is 0" "%d" "%d", n i);
	}
	else
	{
		if ((i < 6) && (i = !0))
		{
			printf("\n Last diggit is and is less than 6 and not 0" "%d" "%d", n i);
		}
	}
}
return (0);
}
