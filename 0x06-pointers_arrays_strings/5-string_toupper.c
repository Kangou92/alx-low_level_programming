#include"main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * string_toupper - convert uppercase in lower
 * @c: to be converted
 *Return: char
*/

char *string_toupper(char *c)
{
	int i = 0;

		while (c[i])
		{
			if (c[i] >= 97 && c[i] <= 122)
				c[i] = c[i] - 32;
				i++;
		}
	return (x);

}
