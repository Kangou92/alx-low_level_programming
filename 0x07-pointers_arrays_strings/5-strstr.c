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

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
			}
				return (needle + j);
			}
		}
			else
			{
				break;
			}
	}
	return ('\0');
}
