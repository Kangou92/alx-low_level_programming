#ifndef FUNCTION_H
#define FUNCTION_H

/**
 * init_dog - instantiation of a dog
 * @name: string
 * @age: integer
 * @owner: string
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{	d = malloc(sizeof(dog));
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
