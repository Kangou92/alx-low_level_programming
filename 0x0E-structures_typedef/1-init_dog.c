#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - instantiation of a dog
 * @name: string
 * @age: integer
 * @owner: string
 * @d: struct
 * Return: void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)

{
	struct dog dogi;
	struct dog *d = &dogi;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
