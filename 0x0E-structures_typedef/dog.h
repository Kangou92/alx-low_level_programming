#ifndef DOG_H
#define DOG_H

/**
 * struct dog - presents the declaration of the structure
 * @name:string
 * @age: integer
 * @owner: string
 *
 * Description: Presents the good method to declare and comment
 * a bloc of structure
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
