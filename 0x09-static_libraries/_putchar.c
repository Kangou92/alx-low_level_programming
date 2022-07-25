#include <unistd.h>

/**
 * _putchar - write the character c to the sreen
 * @c: character to print
 *
 * Return: 1 on success an -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
