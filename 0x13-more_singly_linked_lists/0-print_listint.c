#include "lists.h"

/**
 * print_listint - prints all the element of the list
 *
 * @h: list to be printed
 * Return: number of element in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *tp;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		len++;
		tp = tp->next;
	}
return (len);
}
