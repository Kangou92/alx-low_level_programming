#include "lists.h"

/**
 * add_nodeint - adds node at the beginning
 *
 * @head: pointer to the list
 * @n: integer
 * Return: the list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
