#include"main.h"
#include<stdli.h>
#include<stdio.h>
/**
 * _strncpy - copy strings
 * @dest:first parameter
 * @src: second parameter
 * @n:integer
 * Return: a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
