#include "main.h"

/**
 * len - calculate the length of a given string
 * @s: string whose length will be calculate
 * Return: the length
*/

int len(char *s)
{
	if (*s != '\0')
	{
		return (len(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * check - compare a given string and its reversed form
 * @s: string
 * @l: length of the string
 * Return:the string reversed
*/

int check(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1))
	{
		return (check(s + 1, (l - 2)));
	}
	else
	return (0);
}


/**
 * is_palindrome - check if a given string is a palindrome or not
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int l;

l = len(s);
return (check(s, l));
}
