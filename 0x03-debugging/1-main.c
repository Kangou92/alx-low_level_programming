#include <stdio.h>
/**
 * main - causes an infinity loop
 * Return: 0
*/
int main(void)
{
int i;
printf("infinite loop incomming :(\n");
i = 0
while (i < 10)
{
	/*cause infinite loop*/
	putchar(i);
}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
