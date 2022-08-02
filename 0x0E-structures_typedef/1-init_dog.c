#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - instantiation of a dog
 * @name: string
 * @age: integer
 * @owner: string
 * @d: struct
 * Return:Nothing
*/


void init_dog(struct dog *d, char *name, float age, char *owner)

{
		d = malloc(sizeof(struct dog));
		if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
		free(d);
}
