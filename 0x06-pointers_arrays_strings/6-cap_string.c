#include"main.h"
#include<string.h>
/**
 * cap_string - capitalize all the word of a string
 * @ch: string
 * Return:string
*/

char *cap_string(char *ch)
{
	char tmp[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(',
')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (ch[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || ch[a - 1] == tmp[i]) && (ch[a] >= 97 &&
ch[a] <= 122)
				ch[a] = ch[a] - 32;
				i++;
		}
		a++;
	}
return (ch);
}

