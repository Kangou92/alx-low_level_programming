#include <stdio.h>
#include "dog.h"

/**
 * init_dog - instantiation of a dog
 * @d: struct
 * @name: string
 * @age: integer
 * @owner: string
 * Return:No
*/


void init_dog(struct dog *d, char *name, float age, char *owner)

{
		if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
