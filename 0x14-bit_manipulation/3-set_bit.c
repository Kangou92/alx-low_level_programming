#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - sets the bit at a given position to 1
 *
 * @n: the number which bit is setted
 * @index: index of the bit to set
 * Return: 1 if success an -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
