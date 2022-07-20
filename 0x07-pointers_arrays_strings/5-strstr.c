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

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0')
		{
		if (*(haystack + i) == *(needle + j))
		{
			break;
			return (needle + j);
		}
		else
		break;
	}
	return ('\0');
}
