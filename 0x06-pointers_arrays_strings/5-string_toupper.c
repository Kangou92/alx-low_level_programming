#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * string_toupper - convert uppercase in lower
 * @ch: to be converted
 *Return: char
*/

char *string_toupper(char *ch)
{
	int i;
	int n = 0;

	n = strlen(ch);
	for (i = 0; i < n; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
