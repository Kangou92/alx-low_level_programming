#include "list.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
*/


size_t print_list(const list_t *h);
{

	size_t i = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	while (h)
	{
		i += 1;
		printf(["%u"]"%s", h->len, h->str);
		h = h->next;
	}
	return (i);
}
