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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
