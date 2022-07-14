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
int i, l1, l2, k;
int j = 0;
n = strlen(dest);
m = strlen(src);
for (i = 0; i <= n i++)
{
	if (i <= n + m) 
	dest[i] = src[j];
	j += 1;
}
k = n + m + 1;
dest[k] = '\0';
return (dest);
}
