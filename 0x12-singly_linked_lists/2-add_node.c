#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node - add a node to the linked list
 *
 * @head: pointer to the address of the list
 * @str: string
 * Return: the list
*/


list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;
	list_t *new = malloc(sizeof(*new));
	if (*head == NULL || new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
