#include "lists.h"

/**
 * listsint_len - returns the length of the list
 *
 * @h: pointer to the list
 * Return: length of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
return (len);
}
