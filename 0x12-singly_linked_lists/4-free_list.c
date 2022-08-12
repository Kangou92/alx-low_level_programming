#include "lists.h"

/**
 * free_list - frees the list
 *
 * @head: the listto be freed
 * Return: No return
*/

void free_list(list_t *head)
{
	list_t *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
