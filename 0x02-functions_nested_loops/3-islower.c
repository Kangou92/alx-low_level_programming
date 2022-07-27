#include "main.h"
#include<stdio.h>
/**
 * _islower - test if a caracter is lower or not
 * @c: character which is tested
 * Return: 1 if the character is lower and 0 if not
*/

int _islower(int c)
{
	int i;
		if (c < 97 || c > 122)
		{
			i = 0;
		}
		else
			i = 1;
		return (i);
}


