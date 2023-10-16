#include "dog.h"
/**
 * new_dog - intialize
 * @name: naem of the dog
 * @age: age
 * @owner: owenr of the dog
 * Return: addres of the intiazlized
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
