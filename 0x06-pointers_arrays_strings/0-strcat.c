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
strcat(dest , src);
return (dest);
}
