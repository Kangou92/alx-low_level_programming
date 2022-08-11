#include "list.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h);
{

	unsigned int i = 0;

	if (str == NULL)
		printf("[0] (nil)\n");
	while (h)
	{
		i += 1;
		h = h->next;
		printf("%s", str);
	}
	return (i);
}
