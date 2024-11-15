#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to set the dog free.
 * @d: poppy need a new owner because he's mean
 * poor poppy.
 */

void free_dog(dog_t *d)
{
	free (d->name);
	free (d->owner);
	free (d);
}
