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

	if (h == NULL)
		return (1);
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
return (len);
}
