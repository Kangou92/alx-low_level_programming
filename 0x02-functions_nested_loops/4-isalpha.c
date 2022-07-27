#include "main.h"
#include <stdio.h>

/**
 * _isalpha - test if a character is alphanumeric or not
 * @c:character to test
 * Return: 1 if the character is alphanumeric and 0 if not
*/

int _isalpha(int c)
{
	int i;

	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		i = 0;
	}
	else
		i = 1;
return (i);
}
