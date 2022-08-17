#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address of the first node in the list.
 * @index: Position of the node to find
 * Return: the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
return (head);
}
