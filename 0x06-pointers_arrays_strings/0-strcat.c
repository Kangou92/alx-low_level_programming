#include"main.h"
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
	int i, j;

	j = strlen(dest);
	for (i = 0; i < j; i++)
	{
		if (src[i] != '\0')
		{
			dest[j + i] = src[i];
		}
	}
return (dest);
}
