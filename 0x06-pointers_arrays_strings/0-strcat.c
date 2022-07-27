<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 *_strcat - concatenates two string
 *@dest:first string to be concatenate with the second string
 *@src: second string to be concatenate with the first string
=======
#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strcat - function with two stings as parameter
 * an have to concatenate them
 * @dest:first parameter
 * @src:second parameter
 * Return: Pointer
>>>>>>> 6002fde0eac2db717dbcd6b4f2edfcbc270d22a3
*/

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	strcat(dest src);
=======
	int i, j;

	j = strlen(dest);
	for (i = 0; i < j; i++)
	{
		if (src[i] != '\0')
		{
			dest[j + i] = src[i];
		}
	}
return (dest);
>>>>>>> 6002fde0eac2db717dbcd6b4f2edfcbc270d22a3
}
