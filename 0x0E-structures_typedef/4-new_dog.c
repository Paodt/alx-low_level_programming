#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct dog
 * else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int a, aname, aowner;

	p = malloc(sizeof(*p));
	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (aname = 0; name[aname]; aname++)
		;

	for (aowner = 0; owner[aowner]; aowner++)
		;

	p->name = malloc(aname + 1);
	p->owner = malloc(aowner + 1);

	if (!(p->name) || !(p->owner))
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}

	for (a = 0; a < aname; a++)
		p->name[a] = name[a];
	p->name[a] = '\0';

	p->age = age;

	for (a = 0; a < aowner; a++)
		p->owner[a] = owner[a];
	p->owner[a] = '\0';

	return (p);
}
