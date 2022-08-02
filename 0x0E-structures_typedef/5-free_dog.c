#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/*
 * free_dog - frees the memory occupied by sthe structure dog
 * @d: struct dog
 * Return: no
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
