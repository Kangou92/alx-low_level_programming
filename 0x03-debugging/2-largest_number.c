#include"main.h"
#include<stdio.h>
/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b >= c)
{
	largest = a;
}
else if (a > c && c >= b)
{
	largest = a;
}
else
{
	largest = a;
}
else if (c > a && a >= b)
{
	largest = c;
}
else if (c > b && b >= a)
{
	largest = c;
}
else
{
	largest = c;
else if (b > a && a >= c)
{
	largest = b;
}
else if (b > c && c >= a)
{
	largest = b;
}
else
{
	largest = b;
}
return (largest);
}
