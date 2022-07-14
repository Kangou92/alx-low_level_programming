#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strncat - concatenates two given strings
 * @dest:pointer to a string dest,first paramerter
 * @src:second parameter poin to string src
 * @n:interger length of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0; i < j; i++)
	{
		if (dest[i] != '\0')
		{
			dest[i + j] = src[i];
		}
	}
return (dest);
}
