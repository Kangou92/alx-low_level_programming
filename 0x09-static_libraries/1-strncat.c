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
strncat(dest, src, n);
return (dest);
}
