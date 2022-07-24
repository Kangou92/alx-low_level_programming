#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 *
 * @argc: integer
 * @argv: array of string
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, k;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k= 0; k < argc; k++)
		{
		if (argv[i][k] > '9' || argv[i][k] < '0')
		{
			printf("%s\n" "Error");
			return (1);
		}
		j = atoi(argv[i][k]);
		sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
