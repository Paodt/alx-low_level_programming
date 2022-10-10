#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: first variable
 * @name: second
 * @age: third
 * owner: fourth
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
