#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c:character
 * Return: pointer to a character
*/

char *_strchr(char *s, char c)
{
	char *ch;

	ch = strchr(s, c);
return (ch);
}
