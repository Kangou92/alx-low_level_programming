#include"main.h"
#include<string.h>
#include<stdio.h>
/*
 * _strcmp  -  compare two string
 * @s1:string first parameter
 * @s2:string second parameter
 * Return: interger
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	strcmp(s1, s2);
	if (s1 < s2)
	{
		i = -15;
	}
	else if (s1 > s2)
	{
	i = 15;
	}
	else
	i = 0;
return (i);
}
