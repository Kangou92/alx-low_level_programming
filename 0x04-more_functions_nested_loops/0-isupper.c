#include "main.h"
#include<stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @c: integer
*/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
