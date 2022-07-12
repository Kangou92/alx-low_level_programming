#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - reversed a given string
 * @s:string to reversed
*/

void rev_string(char *s)
{
int i, n, j;
i = 0;
j = 0;
char tmp;
while (s[i] != '\0')
i++;
j = i - 1;
for (n = 0; n < i / 2; n++)
{
tmp = s[n];
s[n] = s[j];
s[j] = tmp;
j -= 1;
}
}

