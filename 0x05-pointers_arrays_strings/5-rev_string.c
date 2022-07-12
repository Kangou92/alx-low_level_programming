#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - reversed a given string
 * @s:string to reversed
*/

void rev_string(char *s)
{
int i, n;
i = strlen(s);
char tmp;
for (n = i - 1; n >= 0; n--)
{
tmp = s[n];
s[i] = tmp;
i -= i;
}
}

