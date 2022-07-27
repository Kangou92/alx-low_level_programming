#include "main.h"

/**
 * isprime_p - test if a is or not a prime number
 * @p: number to test
 * @q:integer
 * Return: O
*/

int isprime_p(int p, int q)
{
	if (p <= 1 || (p != q && p % q == 0))
	{
		return (0);
	}
	else if (p == q)
	{
		return (1);
	}
	return (isprime_p(p, q + 1));
}

/**
 * is_prime_number - verify if n is prime
 * @n: interger
 *
 * Return: int
*/

int is_prime_number(int n)
{
	return (isprime_p(n, 2));
}
