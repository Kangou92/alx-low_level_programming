#include "lists.h"

/**
 * list_len - returns the number of elements 
 * in the linked list_t list
 *
 * @h: pointer to the linked list
 * Return: the length of the list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
