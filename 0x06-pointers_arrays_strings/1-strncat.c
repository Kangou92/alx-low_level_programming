#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * _strncat - concatenates two given strings
 * @dest:pointer to a string dest,first paramerter
 * @src:second parameter poin to string src
 * @n:interger length of dest
 * Return:pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j <= n; j++)
		{
			while (src[j] != '\0')
			{
				dest[i + j] = src[j];
			}
		}
	}
	dest[i + j] = '\0';
return (dest);
}
