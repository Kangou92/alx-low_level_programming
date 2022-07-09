#include<stdio.h>
/**
 * main - Entry  Point
 * Return: always 0
*/
int main(void)
{
int i;
float b;
char c;
long int l;
long long int ll;
printf("The size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(l));
printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(b));
return (0);
}
