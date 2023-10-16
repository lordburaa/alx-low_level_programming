#include "dog.h"
/**
 * free_dog - free memory
 * @d: struct to be free
 */
void free_dog(dog_t *d)
{
	free(d);
}
