#include "main.h"
/**
 *_isupper - check if a character is upper or not
 * Return: always 0
 * @c: integer
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
