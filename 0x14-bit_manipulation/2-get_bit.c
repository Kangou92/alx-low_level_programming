#include "main.h"
/**
 * get_bit - get the value of a bit at a given position
 *
 * @n: number to get its bit
 * @index: position of the bit
 * Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int numb;

	numb = (n >> index);
	if (index > 32)
		return (-1);
	return (numb & 1);
}
