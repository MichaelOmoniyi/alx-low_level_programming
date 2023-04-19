#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: New name to be initialized.
 * @age: New age to be initialized.
 * @owner: New owner to be initialized.
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dog;

dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
