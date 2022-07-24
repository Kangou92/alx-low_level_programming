#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: integer
 * @argv: array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, k, l = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5 && j >= 0; i++)
	{
		while (j >= coins[i])
		{
			k = j / coins[i];
			l += k;
			printf("%d\n", l);
		}
	}
}
