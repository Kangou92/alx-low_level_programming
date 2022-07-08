#include <stdio.h>
#include <stdlib.h>
/**
 * main - causes an infinity loop
 * Return: 0
*/
int main(void)
{
int i:
printf("infinite loop incomming :(\n");
i = 0;
while (i < 10)
{
	putchar(i);
}
	/*this part of code  is causing the output*/
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
