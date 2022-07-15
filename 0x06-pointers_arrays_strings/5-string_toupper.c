#include"main.h"
#include<string.h>
/**
 * string_toupper - convert uppercase in lower
 * @ch: to be converted
 *Return: char
*/

char *string_toupper(char *ch)
{
	int i = 0;

		while (ch[i])
		{
			if (ch[i] >= 97 && ch[i] <= 122)
			{
				ch[i] = ch[i] - 32;
				i++;
			}
		}
	return (ch);
}
