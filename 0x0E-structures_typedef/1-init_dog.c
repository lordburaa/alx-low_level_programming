#ifndef init_d
#define init_d
#include <stdlib.h>

/**
 * init_dog - type struct dog
 * @d: pointer t oostruct dog to intialize
 * @name: name
 * @age: age
 * @owner: owner to intialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
