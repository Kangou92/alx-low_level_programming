#include<stdio.h>
#include<stdlib.h>
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
	int i, j, l, m;
	j = 0;
	l = strlen(dest);
	m = strlen(src);
	for (i = l; i <= l + m; i++)
	{
		dest[i + 1] = src[j];
		j += 1;
	}
	dest[l + m +1] = '\0';
return (dest);
}
