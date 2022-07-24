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
	if (argv[1] < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		j = atoi(argv[1]);
		if (j % coins[i] == 0)
		{
			k = j / i;
			l += k;
			printf("%d\n", l);
		}
	}
}
