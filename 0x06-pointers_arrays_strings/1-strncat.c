#include"main.h"
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
	for (i = 0; i < n; i++)
	{
		do {
		if (src[i] != '\0')
		{
			dest[i + j] = src[i];
			n -= 1;
		}
		while (n != 0)
		}

	}
return (dest);
}
