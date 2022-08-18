#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int number
 *
 * @b: pointer to the string
 * Return: unsigned int number
*/

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (j = 0; j <b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}

		res = 2 * res + (b[j] - '0');
	}
	return (res);
}
