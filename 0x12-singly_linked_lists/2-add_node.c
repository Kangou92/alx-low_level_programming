#include "lists.h"



/**
 * add_node - add a node to the linked list
 *
 * @head: pointer to the address of the list
 * @str: string
 * Return: the list
*/


list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	for (len = 0; str[len] != '\0'; len++)
		;
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
		free(new);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
	free(new);
}
