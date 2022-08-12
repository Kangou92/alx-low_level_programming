#include "lists.h"


/**
 * add_node_end - adds a node at the end of the list
 *
 * @head: pointer to the adress of the lsit
 * @str: string
 * Return: the list
*/


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *tmp = *head;

	while (str[len])
		len++;
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
	tmp->next = new;
	return (new);
	}
}
