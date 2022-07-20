#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: string
 * Return:pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, bool;

	bool = 1;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *neddle)
		{
			bool = 1;
			break;
			return (needle);
		}
		else
			bool = 0;
	}
	return ('\0');
}
