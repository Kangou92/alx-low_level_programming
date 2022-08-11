#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints the element of th linked list
 * @h: pointer to the linked list
 *
 * Return: the number of element
*/

size_t print_list(const list_t *h)
{

	size_t i = 0;

	if (h->str == NULL)
		printf("[0] (nil)");
	else
	while (h)
	{
		printf("[%u]%s", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
