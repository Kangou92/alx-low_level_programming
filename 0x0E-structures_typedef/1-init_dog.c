#include "dog.h"
#include <stdlib.h>
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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
