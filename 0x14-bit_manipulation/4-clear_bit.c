#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets to zero a bit at a given index
 *
 * @n: number which bit is to set
 * @index: index on which to set the bit
 * Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
