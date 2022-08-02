#include <stdlib.h>
#include <stdio.h>
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
		if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
