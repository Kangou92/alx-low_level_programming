#include<stdio.h>
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
int i, j, l1, l2, k;
l1 = strlen(dest);
l2 = strlen(src);
for (i = l1 + 1; i <= l1 + l2; i++)
{
	dest[i] = src[j];
	j += 1;
}
k = l1 + l2 + 1;
dest[k] = '\0';
return (dest);
}
