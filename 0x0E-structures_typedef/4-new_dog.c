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
int name_len = _strlen(name);
int owner_len = _strlen(owner);

dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (name_len + 1));
if (dog->name == NULL)
{
free(dog);
return(NULL);
}
dog->owner = malloc(sizeof(char) * (owner_len + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return(NULL);
}
_strncpy(dog->name, name);
_strncpy(dog->owner, owner);
dog->age = age

return (dog);
}
