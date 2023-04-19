#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes variable of struct dog.
 * @d: Pointer to struct dog.
 * @name: Name to be initialized.
 * @age: Age to be initialized.
 * @owner: Owner to be initialized.
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
(*d).age = age;
(*d).owner = owner;
}
