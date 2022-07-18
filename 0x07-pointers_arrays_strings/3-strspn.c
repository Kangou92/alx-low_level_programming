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
	unsigned int i = 0, j k, l, len = 0, p;

	j = strlen(s);
	k = strlen(accept);
	while (s[i])
	{
	for (i = 0; i < j; i++)
	{
		for (l = 0; l < k; l++)
		{
		if (s[i] == accept[j]
		{
			len += 1;
			p = sizeof(len);
			break;
		}
		else
		break;
		}
	}
	return (len);
}
