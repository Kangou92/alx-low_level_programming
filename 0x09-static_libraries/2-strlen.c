#include "main.h"
/**
 * _strlen - give the lenght of a string
 * @s: string
 *Return:the lengh of the string
*/

int _strlen(char *s)
{
int i;

	while (*s++)
		i++;
return (i);
}
