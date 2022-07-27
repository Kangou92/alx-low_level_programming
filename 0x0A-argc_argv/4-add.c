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
	int i, j, k, l;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
		if (argv[i][k] > '9' || argv[i][k] < '0')
		{
			printf("Error\n");
			return (1);
		}
		}
	}
	for (l = 1; l < argc; l++)
	{
		j = atoi(argv[l]);
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
