#include "main.h"

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
	int i, j;
	i = 1;

	if (argc == 1)

	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
		i++;
	}
	printf(sum);
	return (0);
}
