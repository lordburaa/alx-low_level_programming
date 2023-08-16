#ifndef dog_j
#define dog_h
#include "dog.h"
#include <stdlib.h>
/**
 * struct dog - owner
 * @name: name
 * @age: age
 * @owner: owner
 * Return : 0
 */
struct dog
{
	char *name;
	float age;
	char *owner
};
/**
 * dog_t - tprede
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int strlen(char *s);
#endif
