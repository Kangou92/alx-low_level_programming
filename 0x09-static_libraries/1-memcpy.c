#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - compy byte from a memory area to another
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (dest);
}
