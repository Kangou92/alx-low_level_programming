#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - gets the length of a given substring
 * @s: string
 * @accept:string
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept);

{
	unsigned int i, len;
	i = strspn(s, accept);
	len = sizeof(i);
	return (len);
}
