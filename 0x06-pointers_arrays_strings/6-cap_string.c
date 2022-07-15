#include"main.h"
#include<string.h>
/**
 * cap_string - capitalize all the word of a string
 * @ch: string
 * Return:string
*/

char *cap_string(char *ch)
{
	int a = 0;

	while (ch[a])
	{
		if (ch[a] >= 9 || ch[a] <= 64)
		{
			ch[a] = ch[a] - 32;
			a++;
		}
		a = 0;
		else if (ch[a] <= 91 || ch[a] <= 125)
		{
			ch[a] = ch[a] - 32;
			a++;
		}
	}
return (ch);
}

