#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - gets the length of a given substring
 * @s: string
 * @accept:string
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int len, i, k, m, j,  l, a = 0;
	char *ch;

	k = strlen(s);
	l = strlen(accept);
	while (s[a])
	{
		for (i = 0; i < k; i++)
		{
		for  (j = 0; j < l; j++)
		{
			if (s[i] == accept[j])
			{
				ch = accept[j];
				break;
			}
			else
				break;
		}
		a++;
		}
	}
	m = strlen(ch);
	len = j * sizeof(ch);
	return (len);
}
