#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: integer
 * @owner: string
 * Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *milou;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	milou = malloc(sizeof(dog_t));
	if (milou == NULL)
	{
		free(milou);
		return (NULL);
	}
	milou->name = malloc(i * sizeof(char));
	if (milou->name == NULL)
	{
		free(milou->name);
		free(milou);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		milou->name[k] = name[k];
	milou->age = age;
	milou->owner = malloc(j * sizeof(char));
	if (milou->owner == NULL)
	{
		free(milou->owner);
		free(milou->name);
		free(milou);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		milou->owner[k] = owner[k];
	return (milou);
	free(milou);
}

