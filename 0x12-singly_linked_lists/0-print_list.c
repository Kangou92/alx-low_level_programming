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

	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
