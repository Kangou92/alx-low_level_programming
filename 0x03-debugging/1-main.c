#include <stdio.h>
/**
 * main - causes an infinity loop
 * Return: 0
*/
int main(void)
{
int i:
printf("infinite loop incomming :(\n");
i = 0;
/*this part of code causes the output of infinite loop*/
while (i < 10)
{
	putchar(i);
}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
