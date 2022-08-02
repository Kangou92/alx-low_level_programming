#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints rhe information for a given dog
 * @d: an instance of the dog to print
 * Return: void
*/

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	d->name = name;
	d->age = age;
	d->owner = owner;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	printf(" ");
	if (d->name == NULL)
	printf("Name:(nil)");
	if (d->owner == NULL)
	printf("owner:(nil)");
	printf("%s", d->name);
	printf("%f", d->age);
	printf("%s", d->owner);
}
