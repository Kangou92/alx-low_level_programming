#include <stdio.h>
#include <string.h>

/**
 * main - print all the argument
 *
 * @argc: interger
 * @argv: array of char
 * Return:0
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
