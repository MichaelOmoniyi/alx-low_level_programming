#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/**
 * dog - defines a new type struct dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for dog.
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d)
#endif
