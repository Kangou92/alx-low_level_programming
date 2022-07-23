#include "main.h"

/**
 * myname_is - print its own name
 * @argc:integer
 * @argv: array of string
 * Return:0
*/

int main(int argc, char *argv[])
{
	int a = argc - argc;

	printf("%s\n", argv[a]);
	return (0);
}
