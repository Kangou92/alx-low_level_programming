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
int i, l1, m, n, l2, k;
int j = 0;
l1 = strlen(dest);
l2 = strlen(src);
m = l1 + 1;
n = l1+ l2;
for (i = m; i <= n; i++)
{
	dest[i] = src[j];
	j += 1;
}
k = l1 + l2 + 1;
dest[k] = '\0';
return (dest);
}
