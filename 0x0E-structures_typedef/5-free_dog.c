#include "dog.h"

/**
 * free_dog - Free struct dog memory.
 * @d: Struct to be freed.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
