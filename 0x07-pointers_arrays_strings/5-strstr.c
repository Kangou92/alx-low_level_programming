#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: string
 * Return:pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	char *ch = haystack, found = needle;
	while (*haystack)
	{
		while (*needle)
		{
			if (haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (ch);
		}
		needle = found;
		ch++;
		haystack = ch;
	}
	return (0);
}

