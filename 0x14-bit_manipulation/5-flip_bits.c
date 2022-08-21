#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits to flipped
 *
 * @n: number which bits is flipped
 * @m: number got
 * Return: number of bit to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nbits = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nbits += 1;
		n = n >> 1;
		m = m >> 1;
	}
return (nbits);
}
