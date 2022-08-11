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
		printf("[0] (nil)\n");
	else
	while (h)
	{
		i += 1;
		printf("[%lu]%s", i, h->str);
		h = h->next;
	}
	return (i);
}
