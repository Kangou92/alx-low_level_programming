#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
 * _strcat - function with two stings as parameter
 * an have to concatenate them
 * @dest:first parameter
 * @src:second parameter
 * Return: Pointer
*/

char *_strcat(char *dest, char *src)
{
int l = 0, i;
while (dest[l])
	l++;
for (i = 0; src[i] != '\0'; i++)
{
	dest[l] = src[i];
	l++
}
dest[l] = '\0';
return (dest);
}
