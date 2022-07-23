#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the results of mutliplication
 * @argc:interger
 * @argv: array
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int a, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{

		for (a = 1; i < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
	}
	printf("%d\n", mul);
return (0);
}

