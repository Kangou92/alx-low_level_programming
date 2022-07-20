#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: string
 * Return:pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			break;
			return (needle);
		}
		else
		break;
	}
	return ('\0');
}
