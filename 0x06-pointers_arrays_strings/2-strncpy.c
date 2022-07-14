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
	strncpy(dest, src, n);
	return (dest);
}
