#include "main.h"


/**
 * _strcpy - copy a string in a buffer
 * @dest: pointer to the buffer
 * @src: stg to be copied
 * Return: ponter to the buffer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
